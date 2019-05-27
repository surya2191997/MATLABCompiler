           					               
# 
  0 : main : 
	.globl	main
	.Type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$384, %rsp

#   1 : t0 = 2
	movl	$2, %eax
	movl	%eax, -24(%rbp)

#   2 : t1 = 2
	movl	$2, %eax
	movl	%eax, -28(%rbp)

#   3 : t2 = 2
	movl	$2, %eax
	movl	%eax, -56(%rbp)

#   4 : t3 = 2
	movl	$2, %eax
	movl	%eax, -60(%rbp)

#   5 : t4 = 1
	movl	$1, %eax
	movl	%eax, -88(%rbp)

#   6 : param t4
	movq	-88(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#   7 : t5 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#   8 : t6 = 0
	movl	$0, %eax
	movl	%eax, -92(%rbp)

#   9 : i = t6
	movl	-92(%rbp), %eax
	movl	%eax, -12(%rbp)
.L0:

#  10 : t7 = 2
	movl	$2, %eax
	movl	%eax, -96(%rbp)

#  11 : if i < t7 goto 17
	movl	-12(%rbp), %eax
	cmpl	-96(%rbp), %eax
	jl		.L2

#  12 : goto 38
	jmp		.L7

#  13 : goto 38
	jmp		.L7
.L1:

#  14 : t8 = i
	movl	-12(%rbp), %eax
	movl	%eax, -100(%rbp)

#  15 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  16 : goto 10
	jmp		.L0
.L2:

#  17 : t9 = 0
	movl	$0, %eax
	movl	%eax, -104(%rbp)

#  18 : j = t9
	movl	-104(%rbp), %eax
	movl	%eax, -16(%rbp)
.L3:

#  19 : t10 = 2
	movl	$2, %eax
	movl	%eax, -108(%rbp)

#  20 : if j < t10 goto 26
	movl	-16(%rbp), %eax
	cmpl	-108(%rbp), %eax
	jl		.L5

#  21 : goto 14
	jmp		.L1

#  22 : goto 37
	jmp		.L6
.L4:

#  23 : t11 = j
	movl	-16(%rbp), %eax
	movl	%eax, -112(%rbp)

#  24 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

#  25 : goto 19
	jmp		.L3
.L5:

#  26 : t12 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -116(%rbp)

#  27 : param t12
	movq	-116(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  28 : t13 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -120(%rbp)

#  29 : t14 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -124(%rbp)

#  30 : t15 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -128(%rbp)

#  31 : t16 = t15 * 4
	movl	-128(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -132(%rbp)

#  32 : t17 = t16 + 8
	movl	-132(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -136(%rbp)

#  33 : t14 = t14 + t17
	movl	-124(%rbp), %eax
	movl	-136(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -124(%rbp)

#  34 : t18 = m1[t14]
	movl	-124(%rbp), %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -140(%rbp)

#  35 : m1[t14] = a
	movl	-124(%rbp), %eax
	movl	-8(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  36 : goto 23
	jmp		.L4
.L6:

#  37 : goto 14
	jmp		.L1
.L7:

#  38 : t19 = 2
	movl	$2, %eax
	movl	%eax, -144(%rbp)

#  39 : param t19
	movq	-144(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  40 : t20 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  41 : t21 = 0
	movl	$0, %eax
	movl	%eax, -148(%rbp)

#  42 : i = t21
	movl	-148(%rbp), %eax
	movl	%eax, -12(%rbp)
.L8:

#  43 : t22 = 2
	movl	$2, %eax
	movl	%eax, -152(%rbp)

#  44 : if i < t22 goto 50
	movl	-12(%rbp), %eax
	cmpl	-152(%rbp), %eax
	jl		.L10

#  45 : goto 71
	jmp		.L15

#  46 : goto 71
	jmp		.L15
.L9:

#  47 : t23 = i
	movl	-12(%rbp), %eax
	movl	%eax, -156(%rbp)

#  48 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  49 : goto 43
	jmp		.L8
.L10:

#  50 : t24 = 0
	movl	$0, %eax
	movl	%eax, -160(%rbp)

#  51 : j = t24
	movl	-160(%rbp), %eax
	movl	%eax, -16(%rbp)
.L11:

#  52 : t25 = 2
	movl	$2, %eax
	movl	%eax, -164(%rbp)

#  53 : if j < t25 goto 59
	movl	-16(%rbp), %eax
	cmpl	-164(%rbp), %eax
	jl		.L13

#  54 : goto 47
	jmp		.L9

#  55 : goto 70
	jmp		.L14
.L12:

#  56 : t26 = j
	movl	-16(%rbp), %eax
	movl	%eax, -168(%rbp)

#  57 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

#  58 : goto 52
	jmp		.L11
.L13:

#  59 : t27 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -172(%rbp)

#  60 : param t27
	movq	-172(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  61 : t28 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -176(%rbp)

#  62 : t29 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -180(%rbp)

#  63 : t30 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -184(%rbp)

#  64 : t31 = t30 * 4
	movl	-184(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -188(%rbp)

#  65 : t32 = t31 + 8
	movl	-188(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -192(%rbp)

#  66 : t29 = t29 + t32
	movl	-180(%rbp), %eax
	movl	-192(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -180(%rbp)

#  67 : t33 = m2[t29]
	movl	-180(%rbp), %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -196(%rbp)

#  68 : m2[t29] = a
	movl	-180(%rbp), %eax
	movl	-8(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  69 : goto 56
	jmp		.L12
.L14:

#  70 : goto 47
	jmp		.L9
.L15:

#  71 : t34 = m1[8]
	movl	$8, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -200(%rbp)

#  72 : t35 = m2[8]
	movl	$8, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -204(%rbp)

#  73 : t36 = t35 + t34
	movl	-204(%rbp), %eax
	movl	-200(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -208(%rbp)

#  74 : m1[8] = t36
	movl	$8, %eax
	movl	-208(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  75 : t37 = m1[12]
	movl	$12, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -212(%rbp)

#  76 : t38 = m2[12]
	movl	$12, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -216(%rbp)

#  77 : t39 = t38 + t37
	movl	-216(%rbp), %eax
	movl	-212(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -220(%rbp)

#  78 : m1[12] = t39
	movl	$12, %eax
	movl	-220(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  79 : t40 = m1[16]
	movl	$16, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -224(%rbp)

#  80 : t41 = m2[16]
	movl	$16, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -228(%rbp)

#  81 : t42 = t41 + t40
	movl	-228(%rbp), %eax
	movl	-224(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -232(%rbp)

#  82 : m1[16] = t42
	movl	$16, %eax
	movl	-232(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  83 : t43 = m1[20]
	movl	$20, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -236(%rbp)

#  84 : t44 = m2[20]
	movl	$20, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -240(%rbp)

#  85 : t45 = t44 + t43
	movl	-240(%rbp), %eax
	movl	-236(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -244(%rbp)

#  86 : m1[20] = t45
	movl	$20, %eax
	movl	-244(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  87 : t46 = m1[8]
	movl	$8, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -248(%rbp)

#  88 : m2[8] = t46
	movl	$8, %eax
	movl	-248(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  89 : t47 = m1[12]
	movl	$12, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -252(%rbp)

#  90 : m2[12] = t47
	movl	$12, %eax
	movl	-252(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  91 : t48 = m1[16]
	movl	$16, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -256(%rbp)

#  92 : m2[16] = t48
	movl	$16, %eax
	movl	-256(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  93 : t49 = m1[20]
	movl	$20, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -260(%rbp)

#  94 : m2[20] = t49
	movl	$20, %eax
	movl	-260(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  95 : t51 = m2[8]
	movl	$8, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -288(%rbp)

#  96 : t50[8] = t51
	movl	$8, %eax
	movl	-288(%rbp), %edx
	movl	%edx, -284(%rbp, %rax)

#  97 : t52 = m2[12]
	movl	$12, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -292(%rbp)

#  98 : t50[16] = t52
	movl	$16, %eax
	movl	-292(%rbp), %edx
	movl	%edx, -284(%rbp, %rax)

#  99 : t53 = m2[16]
	movl	$16, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -296(%rbp)

# 100 : t50[12] = t53
	movl	$12, %eax
	movl	-296(%rbp), %edx
	movl	%edx, -284(%rbp, %rax)

# 101 : t54 = m2[20]
	movl	$20, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -300(%rbp)

# 102 : t50[20] = t54
	movl	$20, %eax
	movl	-300(%rbp), %edx
	movl	%edx, -284(%rbp, %rax)

# 103 : t55 = t50[8]
	movl	$8, %eax
	movl	-284(%rbp, %rax), %edx
	movl	%edx, -304(%rbp)

# 104 : m2[8] = t55
	movl	$8, %eax
	movl	-304(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

# 105 : t56 = t50[12]
	movl	$12, %eax
	movl	-284(%rbp, %rax), %edx
	movl	%edx, -308(%rbp)

# 106 : m2[12] = t56
	movl	$12, %eax
	movl	-308(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

# 107 : t57 = t50[16]
	movl	$16, %eax
	movl	-284(%rbp, %rax), %edx
	movl	%edx, -312(%rbp)

# 108 : m2[16] = t57
	movl	$16, %eax
	movl	-312(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

# 109 : t58 = t50[20]
	movl	$20, %eax
	movl	-284(%rbp, %rax), %edx
	movl	%edx, -316(%rbp)

# 110 : m2[20] = t58
	movl	$20, %eax
	movl	-316(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

# 111 : t59 = 3
	movl	$3, %eax
	movl	%eax, -320(%rbp)

# 112 : param t59
	movq	-320(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

# 113 : t60 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

# 114 : t61 = 0
	movl	$0, %eax
	movl	%eax, -324(%rbp)

# 115 : i = t61
	movl	-324(%rbp), %eax
	movl	%eax, -12(%rbp)
.L16:

# 116 : t62 = 2
	movl	$2, %eax
	movl	%eax, -328(%rbp)

# 117 : if i < t62 goto 123
	movl	-12(%rbp), %eax
	cmpl	-328(%rbp), %eax
	jl		.L18

# 118 : goto 142
	jmp		.L23

# 119 : goto 142
	jmp		.L23
.L17:

# 120 : t63 = i
	movl	-12(%rbp), %eax
	movl	%eax, -332(%rbp)

# 121 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

# 122 : goto 116
	jmp		.L16
.L18:

# 123 : t64 = 0
	movl	$0, %eax
	movl	%eax, -336(%rbp)

# 124 : j = t64
	movl	-336(%rbp), %eax
	movl	%eax, -16(%rbp)
.L19:

# 125 : t65 = 2
	movl	$2, %eax
	movl	%eax, -340(%rbp)

# 126 : if j < t65 goto 132
	movl	-16(%rbp), %eax
	cmpl	-340(%rbp), %eax
	jl		.L21

# 127 : goto 120
	jmp		.L17

# 128 : goto 141
	jmp		.L22
.L20:

# 129 : t66 = j
	movl	-16(%rbp), %eax
	movl	%eax, -344(%rbp)

# 130 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

# 131 : goto 125
	jmp		.L19
.L21:

# 132 : t67 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -348(%rbp)

# 133 : t68 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -352(%rbp)

# 134 : t69 = t68 * 4
	movl	-352(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -356(%rbp)

# 135 : t70 = t69 + 8
	movl	-356(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 136 : t67 = t67 + t70
	movl	-348(%rbp), %eax
	movl	-360(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -348(%rbp)

# 137 : t71 = m2[t67]
	movl	-348(%rbp), %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -364(%rbp)

# 138 : param t71
	movq	-364(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

# 139 : t72 = call printInt, 1
	call	printInt
	addq	$12, %rsp
	movq	%rax, -368(%rbp)

# 140 : goto 129
	jmp		.L20
.L22:

# 141 : goto 120
	jmp		.L17
.L23:

# 142 : t73 = 0
	movl	$0, %eax
	movl	%eax, -372(%rbp)

# 143 : return t73
	movq	-372(%rbp), %rax
	leave
	ret

# 144 : end main 

	leave
	ret
	.size	main, .-main
