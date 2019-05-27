           					               
# 
  0 : main : 
	.globl	main
	.Type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$224, %rsp

#   1 : t0 = 3
	movl	$3, %eax
	movl	%eax, -8(%rbp)

#   2 : t1 = 3
	movl	$3, %eax
	movl	%eax, -12(%rbp)

#   3 : t2 = 9
	movl	$9, %eax
	movl	%eax, -80(%rbp)

#   4 : param t2
	movq	-80(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#   5 : t3 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#   6 : t4 = 0
	movl	$0, %eax
	movl	%eax, -84(%rbp)

#   7 : i = t4
	movl	-84(%rbp), %eax
	movl	%eax, -60(%rbp)
.L0:

#   8 : t5 = 3
	movl	$3, %eax
	movl	%eax, -88(%rbp)

#   9 : if i < t5 goto 15
	movl	-60(%rbp), %eax
	cmpl	-88(%rbp), %eax
	jl		.L2

#  10 : goto 70
	jmp		.L12

#  11 : goto 70
	jmp		.L12
.L1:

#  12 : t6 = i
	movl	-60(%rbp), %eax
	movl	%eax, -92(%rbp)

#  13 : i = i + 1
	movl	-60(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -60(%rbp)

#  14 : goto 8
	jmp		.L0
.L2:

#  15 : t7 = 0
	movl	$0, %eax
	movl	%eax, -96(%rbp)

#  16 : j = t7
	movl	-96(%rbp), %eax
	movl	%eax, -64(%rbp)
.L3:

#  17 : t8 = 3
	movl	$3, %eax
	movl	%eax, -100(%rbp)

#  18 : if j < t8 goto 24
	movl	-64(%rbp), %eax
	cmpl	-100(%rbp), %eax
	jl		.L5

#  19 : goto 12
	jmp		.L1

#  20 : goto 69
	jmp		.L11
.L4:

#  21 : t9 = j
	movl	-64(%rbp), %eax
	movl	%eax, -104(%rbp)

#  22 : j = j + 1
	movl	-64(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -64(%rbp)

#  23 : goto 17
	jmp		.L3
.L5:

#  24 : t10 = & a
	leaq	-72(%rbp), %rax
	movq	%rax, -108(%rbp)

#  25 : param t10
	movq	-108(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  26 : t11 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -112(%rbp)

#  27 : t12 = j * 4
	movl	-64(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -116(%rbp)

#  28 : t13 = i * 3
	movl	-60(%rbp), %eax
	movl	$3, %edx
	imull	%edx, %eax
	movl	%eax, -120(%rbp)

#  29 : t14 = t13 * 4
	movl	-120(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -124(%rbp)

#  30 : t15 = t14 + 8
	movl	-124(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -128(%rbp)

#  31 : t12 = t12 + t15
	movl	-116(%rbp), %eax
	movl	-128(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -116(%rbp)

#  32 : t16 = m[t12]
	movl	-116(%rbp), %eax
	movl	-56(%rbp, %rax), %edx
	movl	%edx, -132(%rbp)

#  33 : m[t12] = a
	movl	-116(%rbp), %eax
	movl	-72(%rbp), %edx
	movl	%edx, -56(%rbp, %rax)

#  34 : t17 = 0
	movl	$0, %eax
	movl	%eax, -136(%rbp)

#  35 : if i == t17 goto 41
	movl	-60(%rbp), %eax
	cmpl	-136(%rbp), %eax
	je		.L7

#  36 : goto 37
	jmp		.L6
.L6:

#  37 : t18 = 0
	movl	$0, %eax
	movl	%eax, -140(%rbp)

#  38 : if j == t18 goto 41
	movl	-64(%rbp), %eax
	cmpl	-140(%rbp), %eax
	je		.L7

#  39 : goto 51
	jmp		.L8

#  40 : goto 51
	jmp		.L8
.L7:

#  41 : t19 = 0
	movl	$0, %eax
	movl	%eax, -144(%rbp)

#  42 : t20 = 0
	movl	$0, %eax
	movl	%eax, -148(%rbp)

#  43 : t21 = t20 * 4
	movl	-148(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -152(%rbp)

#  44 : t22 = t19 * 3
	movl	-144(%rbp), %eax
	movl	$3, %edx
	imull	%edx, %eax
	movl	%eax, -156(%rbp)

#  45 : t23 = t22 * 4
	movl	-156(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -160(%rbp)

#  46 : t24 = t23 + 8
	movl	-160(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -164(%rbp)

#  47 : t21 = t21 + t24
	movl	-152(%rbp), %eax
	movl	-164(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -152(%rbp)

#  48 : t25 = m[t21]
	movl	-152(%rbp), %eax
	movl	-56(%rbp, %rax), %edx
	movl	%edx, -168(%rbp)

#  49 : largest = t25
	movl	-168(%rbp), %eax
	movl	%eax, -76(%rbp)

#  50 : goto 51
	jmp		.L8
.L8:

#  51 : t26 = j * 4
	movl	-64(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -172(%rbp)

#  52 : t27 = i * 3
	movl	-60(%rbp), %eax
	movl	$3, %edx
	imull	%edx, %eax
	movl	%eax, -176(%rbp)

#  53 : t28 = t27 * 4
	movl	-176(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -180(%rbp)

#  54 : t29 = t28 + 8
	movl	-180(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -184(%rbp)

#  55 : t26 = t26 + t29
	movl	-172(%rbp), %eax
	movl	-184(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -172(%rbp)

#  56 : t30 = m[t26]
	movl	-172(%rbp), %eax
	movl	-56(%rbp, %rax), %edx
	movl	%edx, -188(%rbp)

#  57 : if largest < t30 goto 60
	movl	-76(%rbp), %eax
	cmpl	-188(%rbp), %eax
	jl		.L9

#  58 : goto 21
	jmp		.L4

#  59 : goto 68
	jmp		.L10
.L9:

#  60 : t31 = j * 4
	movl	-64(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -192(%rbp)

#  61 : t32 = i * 3
	movl	-60(%rbp), %eax
	movl	$3, %edx
	imull	%edx, %eax
	movl	%eax, -196(%rbp)

#  62 : t33 = t32 * 4
	movl	-196(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -200(%rbp)

#  63 : t34 = t33 + 8
	movl	-200(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -204(%rbp)

#  64 : t31 = t31 + t34
	movl	-192(%rbp), %eax
	movl	-204(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -192(%rbp)

#  65 : t35 = m[t31]
	movl	-192(%rbp), %eax
	movl	-56(%rbp, %rax), %edx
	movl	%edx, -208(%rbp)

#  66 : largest = t35
	movl	-208(%rbp), %eax
	movl	%eax, -76(%rbp)

#  67 : goto 21
	jmp		.L4
.L10:

#  68 : goto 21
	jmp		.L4
.L11:

#  69 : goto 12
	jmp		.L1
.L12:

#  70 : t36 = 10
	movl	$10, %eax
	movl	%eax, -212(%rbp)

#  71 : param t36
	movq	-212(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  72 : t37 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  73 : param largest
	movq	-76(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  74 : t38 = call printInt, 1
	call	printInt
	addq	$12, %rsp
	movq	%rax, -216(%rbp)

#  75 : t39 = 0
	movl	$0, %eax
	movl	%eax, -220(%rbp)

#  76 : return t39
	movq	-220(%rbp), %rax
	leave
	ret

#  77 : end main 

	leave
	ret
	.size	main, .-main
