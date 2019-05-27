	.file	"test.c"
	.text
	.globl	func
	.type	func, @function


# function for generating Fibonacci Sequence
func:  
.LFB0:
	.cfi_startproc
	pushq	%rbp      #  old base pointer saved
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp   # rbp is assigned rsp which is the new stack base pointer
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp    # creating space for array and local variables
	.cfi_offset 3, -24
	movl	%edi, -52(%rbp) # store first arguement to function, 'n' (which represents index no. in Fibonacci), to address rbp - 52
	movq	%fs:40, %rax   # command to debug thread
	movq	%rax, -24(%rbp) # store rax to address rbp-24
	xorl	%eax, %eax  # eax is assigned eax^eax = 0
	movq	%rsp, %rax  # rax is assigned rsp
	movq	%rax, %rsi  # rsi is assigned rax ,i.e, move stack pointer rsp to rsi
	movl	-52(%rbp), %eax  # eax is assigned value at rbp - 52 , first argument n = 9 (since A[9] = 34, which is the program output)
	addl	$1, %eax  # eax is assigned eax + 1 , so eax stores 10 now
	movslq	%eax, %rdx  # rdx is assigned eax with sign extension
	subq	$1, %rdx   # rdx is assigned rdx-1 , rdx now stores n-1 = 9
	movq	%rdx, -40(%rbp)  # rdx, i.e. n-1 is stored at -40(%rbp)
	movslq	%eax, %rdx # rdx is assigned eax with sign extension , which stores n+1
	movq	%rdx, %r8  # r8 is assigned rdx, which stores n+1
	movl	$0, %r9d  # r9d is assigned 0
	movslq	%eax, %rdx  # rdx is assigned eax with sign extension which stores n+1
	movq	%rdx, %rcx  # rcx is assigned rdx which stores n+1
	movl	$0, %ebx  # ebx is assigned 0
	cltq    # sign extended to 64 bit
	salq	$2, %rax  # rax is assigned rax<<2 , i.e, rax 40
	leaq	3(%rax), %rdx  # rdx is assigned rax + 3 , i.e, 43
	movl	$16, %eax  # eax is assigned 16
	subq	$1, %rax  # rax is assigned rax - 1, ,i.e, 15
	addq	%rdx, %rax  # rax is assigned rax + rdx , i.e, 58
	movl	$16, %edi  # edi is assigned 16
	movl	$0, %edx  # edx is assigned 0
	divq	%rdi  # rax is assigned rax/rdi ,i.e. 3  ,  rax is assigned rax%rdi ,i.e, 10
	imulq	$16, %rax, %rax  # rax is assigned rax*16 ,i.e, 48
	subq	%rax, %rsp  # rsp is assigned rsp - rax ,i.e, allocates space for array and local variables
	movq	%rsp, %rax  # rax is assigned rsp , stores stack pointer
	addq	$3, %rax  # rax is assigned rax + 3
	shrq	$2, %rax  # rax is assigned rax/4
	salq	$2, %rax  # rax is assigned rax*4

    #  Memory for the local array A[] has been allocated. We use this array for Fibonacci calculation
    movq	%rax, -32(%rbp)  # start pointer of A[] stored in -32(%rbp)
	movq	-32(%rbp), %rax
	movl	$0, (%rax)  # A[0] is assigned 0 , since rax stores start pointer of A
	movq	-32(%rbp), %rax  # rax is assigned value at rbp - 32
	movl	$1, 4(%rax)  #  A[1] is assigned 1, since A + 4 represents address of A[1]
	movl	$2, -44(%rbp) # loop index i is assigned 2
	jmp	.L2


# Here i is incremented and next fibonacci number is stored in the array
.L3:   
	movl	-44(%rbp), %eax  # eax is assigned i, -44(%rbp) stores i
	leal	-1(%rax), %edx # edx loaded with i-1
	movq	-32(%rbp), %rax  # rax is assigned start pointer of array
	movslq	%edx, %rdx  # rdx is assigned i-1 with sign extension
	movl	(%rax,%rdx,4), %ecx  # ecx is assigned A[i-1], ecx is assiged the value stored by %rax + 4*rdx ,i.e, A[i-1]
	movl	-44(%rbp), %eax  # eax is assigned i
	leal	-2(%rax), %edx  # edx is assigned i-2
	movq	-32(%rbp), %rax # rax is assigned start pointer of the array A
	movslq	%edx, %rdx  # rdx is assigned i-2 with sign extension
 	movl	(%rax,%rdx,4), %eax  # eax is assigned A[i-2], ecx is assiged the value stored by %rax + 4*rdx ,i.e, A[i-2]
	addl	%eax, %ecx  # ecx is assigned sum of values at ecx, eax , i.e, ecx is assigned A[i-1] + A[i-2]
	movq	-32(%rbp), %rax  # rax is assigned start pointer of the array A
	movl	-44(%rbp), %edx  # edx is assigned i
	movslq	%edx, %rdx
	movl	%ecx, (%rax,%rdx,4)  # %rax + 4*rdx is assigned value at ecx, i.e, A[i] is assigned A[i-1] + A[i-2] as in a Fibonacci Sequence
	addl	$1, -44(%rbp)  # increment loop index i by 1


# i is assigned new value and compared with n, if i>n jump to .L5
.L2:   
	movl	-44(%rbp), %eax  # eax is assigned i
	cmpl	-52(%rbp), %eax  # i compared with n
	jle	.L3  # if i<=n, jump to .L3
	movq	-32(%rbp), %rax  # rax is assigned start pointer of array
	movl	-52(%rbp), %edx  # edx is assigned n
	movslq	%edx, %rdx
	movl	(%rax,%rdx,4), %eax  # eax is assigned A[n], so the return value is A[n]
	movq	%rsi, %rsp
	movq	-24(%rbp), %rbx  # callee saved pointer restored
	xorq	%fs:40, %rbx  # rbx is assigned 0
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	movq	-8(%rbp), %rbx  # rbx is assigned value at rbp - 8
	leave  
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc  #  leave and ret destroy the stack frame
.LFE0:
	.size	func, .-func
	.section	.rodata
.LC0:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function


# This is the main function, Fibonacci function "func" called from here
main:   
.LFB1:
	.cfi_startproc
	pushq	%rbp  # Old base pointer saved
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp  # assign rsp to rbp , i.e, stack base pointer is set
	.cfi_def_cfa_register 6
	subq	$16, %rsp   # allocate space for local variables
	movl	$9, -4(%rbp) # local variable assigned value 9
	movl	-4(%rbp), %eax  # eax is assigned 9
	movl	%eax, %edi  # edi , i.e, first arguement to function is assigned 9
	call	func  # function "func" is called from main
	movl	%eax, %esi  # argument of printf set as the return value of func(in eax)
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax  # eax is assigned 0
	call	printf@PLT  # call printf function
	call	getchar@PLT # call getchar function
	movl	$0, %eax  # eax is assigned 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 7.1.1 20170630"
	.section	.note.GNU-stack,"",@progbits

    #  OVERALL PROGRAM  
    #  The program computes nth term in the Fibonacci Sequence using a Dynamic Programming approach. 
    #  The function "func" which computes the nth Fibonacci term is called from the main function. 
    #  The number n is passed as an argument to the function "func". 
    #  In "func" an array of length n+1 is declared and A[0] and A[1] are assigned 0 and 1 respectively. 
    #  Then it runs a loop from i=2 to n and computes A[i] = A[i-1] + A[i-2] in a bottom-up manner. 
    #  After termination of the loop, A[i] contains the ith term of the Fibonacci sequence. 
    #  Thus A[n] contains the nth Fibonacci number. 
    #  This value is returned to the main function which is printed using printf function. 
    #  Upon converting the above assembly code to executable and running it, 34 gets printed which is the 9th term in Fibonacci series. 
    #  This is because we explicitly pass 9 as argument of "func" in main function.
