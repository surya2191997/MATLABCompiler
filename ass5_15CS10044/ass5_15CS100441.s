           					           
# 
  0 : fact : 
	.globl	fact
	.Type	fact, @function
fact:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$32, %rsp

#   1 : t0 = 1
	movl	$1, %eax
	movl	%eax, -8(%rbp)

#   2 : if n == t0 goto 5
	movl	16(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je		.L0

#   3 : goto 8
	jmp		.L1

#   4 : goto 8
	jmp		.L1
.L0:

#   5 : t1 = 1
	movl	$1, %eax
	movl	%eax, -12(%rbp)

#   6 : return t1
	movq	-12(%rbp), %rax
	leave
	ret

#   7 : goto 8
	jmp		.L1
.L1:

#   8 : t2 = 1
	movl	$1, %eax
	movl	%eax, -16(%rbp)

#   9 : t3 = n - t2
	movl	16(%rbp), %eax
	movl	-16(%rbp), %edx
	subl	%edx, %eax
	movl	%eax, -20(%rbp)

#  10 : param t3
	movq	-20(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  11 : t4 = call fact, 1
	call	fact
	addq	$12, %rsp
	movq	%rax, -24(%rbp)

#  12 : t5 = n * t4
	movl	16(%rbp), %eax
	movl	-24(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -28(%rbp)

#  13 : return t5
	movq	-28(%rbp), %rax
	leave
	ret

#  14 : end fact 

	leave
	ret
	.size	fact, .-fact

# 
 15 : main : 
	.globl	main
	.Type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$48, %rsp

#  16 : t6 = 6
	movl	$6, %eax
	movl	%eax, -16(%rbp)

#  17 : param t6
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  18 : t7 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  19 : t8 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -20(%rbp)

#  20 : param t8
	movq	-20(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  21 : t9 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -24(%rbp)

#  22 : param a
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  23 : t10 = call fact, 1
	call	fact
	addq	$12, %rsp
	movq	%rax, -28(%rbp)

#  24 : k = t10
	movl	-28(%rbp), %eax
	movl	%eax, -12(%rbp)

#  25 : t11 = 7
	movl	$7, %eax
	movl	%eax, -32(%rbp)

#  26 : param t11
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  27 : t12 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  28 : param k
	movq	-12(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  29 : t13 = call printInt, 1
	call	printInt
	addq	$12, %rsp
	movq	%rax, -36(%rbp)

#  30 : end main 

	leave
	ret
	.size	main, .-main
