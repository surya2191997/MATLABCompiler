           					            
# 
  0 : main : 
	.globl	main
	.Type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$224, %rsp

#   1 : t0 = 0
	movl	$0, %eax
	movl	%eax, -16(%rbp)

#   2 : sum = t0
	movl	-16(%rbp), %eax
	movl	%eax, -20(%rbp)

#   3 : t1 = 4
	movl	$4, %eax
	movl	%eax, -28(%rbp)

#   4 : t2 = 4
	movl	$4, %eax
	movl	%eax, -32(%rbp)

#   5 : t3 = 11
	movl	$11, %eax
	movl	%eax, -108(%rbp)

#   6 : param t3
	movq	-108(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#   7 : t4 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#   8 : t5 = 0
	movl	$0, %eax
	movl	%eax, -112(%rbp)

#   9 : i = t5
	movl	-112(%rbp), %eax
	movl	%eax, -8(%rbp)
.L0:

#  10 : t6 = 4
	movl	$4, %eax
	movl	%eax, -116(%rbp)

#  11 : if i < t6 goto 17
	movl	-8(%rbp), %eax
	cmpl	-116(%rbp), %eax
	jl		.L2

#  12 : goto 38
	jmp		.L7

#  13 : goto 38
	jmp		.L7
.L1:

#  14 : t7 = i
	movl	-8(%rbp), %eax
	movl	%eax, -120(%rbp)

#  15 : i = i + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)

#  16 : goto 10
	jmp		.L0
.L2:

#  17 : t8 = 0
	movl	$0, %eax
	movl	%eax, -124(%rbp)

#  18 : j = t8
	movl	-124(%rbp), %eax
	movl	%eax, -12(%rbp)
.L3:

#  19 : t9 = 4
	movl	$4, %eax
	movl	%eax, -128(%rbp)

#  20 : if j < t9 goto 26
	movl	-12(%rbp), %eax
	cmpl	-128(%rbp), %eax
	jl		.L5

#  21 : goto 14
	jmp		.L1

#  22 : goto 37
	jmp		.L6
.L4:

#  23 : t10 = j
	movl	-12(%rbp), %eax
	movl	%eax, -132(%rbp)

#  24 : j = j + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  25 : goto 19
	jmp		.L3
.L5:

#  26 : t11 = & a
	leaq	-24(%rbp), %rax
	movq	%rax, -136(%rbp)

#  27 : param t11
	movq	-136(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  28 : t12 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -140(%rbp)

#  29 : t13 = j * 4
	movl	-12(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -144(%rbp)

#  30 : t14 = i * 4
	movl	-8(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -148(%rbp)

#  31 : t15 = t14 * 4
	movl	-148(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -152(%rbp)

#  32 : t16 = t15 + 8
	movl	-152(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -156(%rbp)

#  33 : t13 = t13 + t16
	movl	-144(%rbp), %eax
	movl	-156(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -144(%rbp)

#  34 : t17 = m[t13]
	movl	-144(%rbp), %eax
	movl	-104(%rbp, %rax), %edx
	movl	%edx, -160(%rbp)

#  35 : m[t13] = a
	movl	-144(%rbp), %eax
	movl	-24(%rbp), %edx
	movl	%edx, -104(%rbp, %rax)

#  36 : goto 23
	jmp		.L4
.L6:

#  37 : goto 14
	jmp		.L1
.L7:

#  38 : t18 = 0
	movl	$0, %eax
	movl	%eax, -164(%rbp)

#  39 : i = t18
	movl	-164(%rbp), %eax
	movl	%eax, -8(%rbp)
.L8:

#  40 : t19 = 4
	movl	$4, %eax
	movl	%eax, -168(%rbp)

#  41 : if i < t19 goto 47
	movl	-8(%rbp), %eax
	cmpl	-168(%rbp), %eax
	jl		.L10

#  42 : goto 70
	jmp		.L17

#  43 : goto 70
	jmp		.L17
.L9:

#  44 : t20 = i
	movl	-8(%rbp), %eax
	movl	%eax, -172(%rbp)

#  45 : i = i + 1
	movl	-8(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -8(%rbp)

#  46 : goto 40
	jmp		.L8
.L10:

#  47 : t21 = 0
	movl	$0, %eax
	movl	%eax, -176(%rbp)

#  48 : j = t21
	movl	-176(%rbp), %eax
	movl	%eax, -12(%rbp)
.L11:

#  49 : t22 = 4
	movl	$4, %eax
	movl	%eax, -180(%rbp)

#  50 : if j < t22 goto 56
	movl	-12(%rbp), %eax
	cmpl	-180(%rbp), %eax
	jl		.L13

#  51 : goto 44
	jmp		.L9

#  52 : goto 69
	jmp		.L16
.L12:

#  53 : t23 = j
	movl	-12(%rbp), %eax
	movl	%eax, -184(%rbp)

#  54 : j = j + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  55 : goto 49
	jmp		.L11
.L13:

#  56 : if i == j goto 59
	movl	-8(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je		.L14

#  57 : goto 53
	jmp		.L12

#  58 : goto 68
	jmp		.L15
.L14:

#  59 : t24 = j * 4
	movl	-12(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -188(%rbp)

#  60 : t25 = i * 4
	movl	-8(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -192(%rbp)

#  61 : t26 = t25 * 4
	movl	-192(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -196(%rbp)

#  62 : t27 = t26 + 8
	movl	-196(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -200(%rbp)

#  63 : t24 = t24 + t27
	movl	-188(%rbp), %eax
	movl	-200(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -188(%rbp)

#  64 : t28 = m[t24]
	movl	-188(%rbp), %eax
	movl	-104(%rbp, %rax), %edx
	movl	%edx, -204(%rbp)

#  65 : t29 = sum + t28
	movl	-20(%rbp), %eax
	movl	-204(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -208(%rbp)

#  66 : sum = t29
	movl	-208(%rbp), %eax
	movl	%eax, -20(%rbp)

#  67 : goto 53
	jmp		.L12
.L15:

#  68 : goto 53
	jmp		.L12
.L16:

#  69 : goto 44
	jmp		.L9
.L17:

#  70 : t30 = 12
	movl	$12, %eax
	movl	%eax, -212(%rbp)

#  71 : param t30
	movq	-212(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  72 : t31 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  73 : param sum
	movq	-20(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  74 : t32 = call printInt, 1
	call	printInt
	addq	$12, %rsp
	movq	%rax, -216(%rbp)

#  75 : end main 

	leave
	ret
	.size	main, .-main
