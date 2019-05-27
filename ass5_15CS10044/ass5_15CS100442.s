           					                
# 
  0 : main : 
	.globl	main
	.Type	main, @function
main:
	pushq	%rbp
	movq	%rsp, %rbp
	subq	$448, %rsp

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

#   5 : t4 = 2
	movl	$2, %eax
	movl	%eax, -88(%rbp)

#   6 : t5 = 2
	movl	$2, %eax
	movl	%eax, -92(%rbp)

#   7 : t6 = 1
	movl	$1, %eax
	movl	%eax, -120(%rbp)

#   8 : param t6
	movq	-120(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#   9 : t7 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  10 : t8 = 0
	movl	$0, %eax
	movl	%eax, -124(%rbp)

#  11 : i = t8
	movl	-124(%rbp), %eax
	movl	%eax, -12(%rbp)
.L0:

#  12 : t9 = 2
	movl	$2, %eax
	movl	%eax, -128(%rbp)

#  13 : if i < t9 goto 19
	movl	-12(%rbp), %eax
	cmpl	-128(%rbp), %eax
	jl		.L2

#  14 : goto 40
	jmp		.L7

#  15 : goto 40
	jmp		.L7
.L1:

#  16 : t10 = i
	movl	-12(%rbp), %eax
	movl	%eax, -132(%rbp)

#  17 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  18 : goto 12
	jmp		.L0
.L2:

#  19 : t11 = 0
	movl	$0, %eax
	movl	%eax, -136(%rbp)

#  20 : j = t11
	movl	-136(%rbp), %eax
	movl	%eax, -16(%rbp)
.L3:

#  21 : t12 = 2
	movl	$2, %eax
	movl	%eax, -140(%rbp)

#  22 : if j < t12 goto 28
	movl	-16(%rbp), %eax
	cmpl	-140(%rbp), %eax
	jl		.L5

#  23 : goto 16
	jmp		.L1

#  24 : goto 39
	jmp		.L6
.L4:

#  25 : t13 = j
	movl	-16(%rbp), %eax
	movl	%eax, -144(%rbp)

#  26 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

#  27 : goto 21
	jmp		.L3
.L5:

#  28 : t14 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -148(%rbp)

#  29 : param t14
	movq	-148(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  30 : t15 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -152(%rbp)

#  31 : t16 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -156(%rbp)

#  32 : t17 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -160(%rbp)

#  33 : t18 = t17 * 4
	movl	-160(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -164(%rbp)

#  34 : t19 = t18 + 8
	movl	-164(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -168(%rbp)

#  35 : t16 = t16 + t19
	movl	-156(%rbp), %eax
	movl	-168(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -156(%rbp)

#  36 : t20 = m1[t16]
	movl	-156(%rbp), %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -172(%rbp)

#  37 : m1[t16] = a
	movl	-156(%rbp), %eax
	movl	-8(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

#  38 : goto 25
	jmp		.L4
.L6:

#  39 : goto 16
	jmp		.L1
.L7:

#  40 : t21 = 2
	movl	$2, %eax
	movl	%eax, -176(%rbp)

#  41 : param t21
	movq	-176(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  42 : t22 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  43 : t23 = 0
	movl	$0, %eax
	movl	%eax, -180(%rbp)

#  44 : i = t23
	movl	-180(%rbp), %eax
	movl	%eax, -12(%rbp)
.L8:

#  45 : t24 = 2
	movl	$2, %eax
	movl	%eax, -184(%rbp)

#  46 : if i < t24 goto 52
	movl	-12(%rbp), %eax
	cmpl	-184(%rbp), %eax
	jl		.L10

#  47 : goto 73
	jmp		.L15

#  48 : goto 73
	jmp		.L15
.L9:

#  49 : t25 = i
	movl	-12(%rbp), %eax
	movl	%eax, -188(%rbp)

#  50 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  51 : goto 45
	jmp		.L8
.L10:

#  52 : t26 = 0
	movl	$0, %eax
	movl	%eax, -192(%rbp)

#  53 : j = t26
	movl	-192(%rbp), %eax
	movl	%eax, -16(%rbp)
.L11:

#  54 : t27 = 2
	movl	$2, %eax
	movl	%eax, -196(%rbp)

#  55 : if j < t27 goto 61
	movl	-16(%rbp), %eax
	cmpl	-196(%rbp), %eax
	jl		.L13

#  56 : goto 49
	jmp		.L9

#  57 : goto 72
	jmp		.L14
.L12:

#  58 : t28 = j
	movl	-16(%rbp), %eax
	movl	%eax, -200(%rbp)

#  59 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

#  60 : goto 54
	jmp		.L11
.L13:

#  61 : t29 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -204(%rbp)

#  62 : param t29
	movq	-204(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  63 : t30 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -208(%rbp)

#  64 : t31 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -212(%rbp)

#  65 : t32 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -216(%rbp)

#  66 : t33 = t32 * 4
	movl	-216(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -220(%rbp)

#  67 : t34 = t33 + 8
	movl	-220(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -224(%rbp)

#  68 : t31 = t31 + t34
	movl	-212(%rbp), %eax
	movl	-224(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -212(%rbp)

#  69 : t35 = m2[t31]
	movl	-212(%rbp), %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -228(%rbp)

#  70 : m2[t31] = a
	movl	-212(%rbp), %eax
	movl	-8(%rbp), %edx
	movl	%edx, -84(%rbp, %rax)

#  71 : goto 58
	jmp		.L12
.L14:

#  72 : goto 49
	jmp		.L9
.L15:

#  73 : t36 = 2
	movl	$2, %eax
	movl	%eax, -232(%rbp)

#  74 : param t36
	movq	-232(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  75 : t37 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

#  76 : t38 = 0
	movl	$0, %eax
	movl	%eax, -236(%rbp)

#  77 : i = t38
	movl	-236(%rbp), %eax
	movl	%eax, -12(%rbp)
.L16:

#  78 : t39 = 2
	movl	$2, %eax
	movl	%eax, -240(%rbp)

#  79 : if i < t39 goto 85
	movl	-12(%rbp), %eax
	cmpl	-240(%rbp), %eax
	jl		.L18

#  80 : goto 106
	jmp		.L23

#  81 : goto 106
	jmp		.L23
.L17:

#  82 : t40 = i
	movl	-12(%rbp), %eax
	movl	%eax, -244(%rbp)

#  83 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

#  84 : goto 78
	jmp		.L16
.L18:

#  85 : t41 = 0
	movl	$0, %eax
	movl	%eax, -248(%rbp)

#  86 : j = t41
	movl	-248(%rbp), %eax
	movl	%eax, -16(%rbp)
.L19:

#  87 : t42 = 2
	movl	$2, %eax
	movl	%eax, -252(%rbp)

#  88 : if j < t42 goto 94
	movl	-16(%rbp), %eax
	cmpl	-252(%rbp), %eax
	jl		.L21

#  89 : goto 82
	jmp		.L17

#  90 : goto 105
	jmp		.L22
.L20:

#  91 : t43 = j
	movl	-16(%rbp), %eax
	movl	%eax, -256(%rbp)

#  92 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

#  93 : goto 87
	jmp		.L19
.L21:

#  94 : t44 = & a
	leaq	-8(%rbp), %rax
	movq	%rax, -260(%rbp)

#  95 : param t44
	movq	-260(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

#  96 : t45 = call readInt, 1
	call	readInt
	addq	$12, %rsp
	movq	%rax, -264(%rbp)

#  97 : t46 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -268(%rbp)

#  98 : t47 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -272(%rbp)

#  99 : t48 = t47 * 4
	movl	-272(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -276(%rbp)

# 100 : t49 = t48 + 8
	movl	-276(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -280(%rbp)

# 101 : t46 = t46 + t49
	movl	-268(%rbp), %eax
	movl	-280(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -268(%rbp)

# 102 : t50 = m3[t46]
	movl	-268(%rbp), %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -284(%rbp)

# 103 : m3[t46] = a
	movl	-268(%rbp), %eax
	movl	-8(%rbp), %edx
	movl	%edx, -116(%rbp, %rax)

# 104 : goto 91
	jmp		.L20
.L22:

# 105 : goto 82
	jmp		.L17
.L23:

# 106 : t51 = m1[8]
	movl	$8, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -288(%rbp)

# 107 : t52 = m2[8]
	movl	$8, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -292(%rbp)

# 108 : t53 = t52 + t51
	movl	-292(%rbp), %eax
	movl	-288(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -296(%rbp)

# 109 : m1[8] = t53
	movl	$8, %eax
	movl	-296(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

# 110 : t54 = m1[12]
	movl	$12, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -300(%rbp)

# 111 : t55 = m2[12]
	movl	$12, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -304(%rbp)

# 112 : t56 = t55 + t54
	movl	-304(%rbp), %eax
	movl	-300(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -308(%rbp)

# 113 : m1[12] = t56
	movl	$12, %eax
	movl	-308(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

# 114 : t57 = m1[16]
	movl	$16, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -312(%rbp)

# 115 : t58 = m2[16]
	movl	$16, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -316(%rbp)

# 116 : t59 = t58 + t57
	movl	-316(%rbp), %eax
	movl	-312(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -320(%rbp)

# 117 : m1[16] = t59
	movl	$16, %eax
	movl	-320(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

# 118 : t60 = m1[20]
	movl	$20, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -324(%rbp)

# 119 : t61 = m2[20]
	movl	$20, %eax
	movl	-84(%rbp, %rax), %edx
	movl	%edx, -328(%rbp)

# 120 : t62 = t61 + t60
	movl	-328(%rbp), %eax
	movl	-324(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -332(%rbp)

# 121 : m1[20] = t62
	movl	$20, %eax
	movl	-332(%rbp), %edx
	movl	%edx, -52(%rbp, %rax)

# 122 : t64 = 0
	movl	$0, %eax
	movl	%eax, -360(%rbp)

# 123 : t67 = m1[8]
	movl	$8, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 124 : t66 = m3[8]
	movl	$8, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 125 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 126 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 127 : t67 = m1[12]
	movl	$12, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 128 : t66 = m3[16]
	movl	$16, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 129 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 130 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 131 : t63[8] = t64
	movl	$8, %eax
	movl	-360(%rbp), %edx
	movl	%edx, -356(%rbp, %rax)

# 132 : t64 = 0
	movl	$0, %eax
	movl	%eax, -360(%rbp)

# 133 : t67 = m1[8]
	movl	$8, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 134 : t66 = m3[12]
	movl	$12, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 135 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 136 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 137 : t67 = m1[12]
	movl	$12, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 138 : t66 = m3[20]
	movl	$20, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 139 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 140 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 141 : t63[12] = t64
	movl	$12, %eax
	movl	-360(%rbp), %edx
	movl	%edx, -356(%rbp, %rax)

# 142 : t64 = 0
	movl	$0, %eax
	movl	%eax, -360(%rbp)

# 143 : t67 = m1[16]
	movl	$16, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 144 : t66 = m3[8]
	movl	$8, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 145 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 146 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 147 : t67 = m1[20]
	movl	$20, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 148 : t66 = m3[16]
	movl	$16, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 149 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 150 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 151 : t63[16] = t64
	movl	$16, %eax
	movl	-360(%rbp), %edx
	movl	%edx, -356(%rbp, %rax)

# 152 : t64 = 0
	movl	$0, %eax
	movl	%eax, -360(%rbp)

# 153 : t67 = m1[16]
	movl	$16, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 154 : t66 = m3[12]
	movl	$12, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 155 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 156 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 157 : t67 = m1[20]
	movl	$20, %eax
	movl	-52(%rbp, %rax), %edx
	movl	%edx, -372(%rbp)

# 158 : t66 = m3[20]
	movl	$20, %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -368(%rbp)

# 159 : t65 = t67 * t66
	movl	-372(%rbp), %eax
	movl	-368(%rbp), %edx
	imull	%edx, %eax
	movl	%eax, -364(%rbp)

# 160 : t64 = t64 + t65
	movl	-360(%rbp), %eax
	movl	-364(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -360(%rbp)

# 161 : t63[20] = t64
	movl	$20, %eax
	movl	-360(%rbp), %edx
	movl	%edx, -356(%rbp, %rax)

# 162 : t68 = t63[8]
	movl	$8, %eax
	movl	-356(%rbp, %rax), %edx
	movl	%edx, -376(%rbp)

# 163 : m3[8] = t68
	movl	$8, %eax
	movl	-376(%rbp), %edx
	movl	%edx, -116(%rbp, %rax)

# 164 : t69 = t63[12]
	movl	$12, %eax
	movl	-356(%rbp, %rax), %edx
	movl	%edx, -380(%rbp)

# 165 : m3[12] = t69
	movl	$12, %eax
	movl	-380(%rbp), %edx
	movl	%edx, -116(%rbp, %rax)

# 166 : t70 = t63[16]
	movl	$16, %eax
	movl	-356(%rbp, %rax), %edx
	movl	%edx, -384(%rbp)

# 167 : m3[16] = t70
	movl	$16, %eax
	movl	-384(%rbp), %edx
	movl	%edx, -116(%rbp, %rax)

# 168 : t71 = t63[20]
	movl	$20, %eax
	movl	-356(%rbp, %rax), %edx
	movl	%edx, -388(%rbp)

# 169 : m3[20] = t71
	movl	$20, %eax
	movl	-388(%rbp), %edx
	movl	%edx, -116(%rbp, %rax)

# 170 : t72 = 8
	movl	$8, %eax
	movl	%eax, -392(%rbp)

# 171 : param t72
	movq	-392(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

# 172 : t73 = call printStr_, 1
	call	printStr_
	addq	$12, %rsp

# 173 : t74 = 0
	movl	$0, %eax
	movl	%eax, -396(%rbp)

# 174 : i = t74
	movl	-396(%rbp), %eax
	movl	%eax, -12(%rbp)
.L24:

# 175 : t75 = 2
	movl	$2, %eax
	movl	%eax, -400(%rbp)

# 176 : if i < t75 goto 182
	movl	-12(%rbp), %eax
	cmpl	-400(%rbp), %eax
	jl		.L26

# 177 : goto 201
	jmp		.L31

# 178 : goto 201
	jmp		.L31
.L25:

# 179 : t76 = i
	movl	-12(%rbp), %eax
	movl	%eax, -404(%rbp)

# 180 : i = i + 1
	movl	-12(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -12(%rbp)

# 181 : goto 175
	jmp		.L24
.L26:

# 182 : t77 = 0
	movl	$0, %eax
	movl	%eax, -408(%rbp)

# 183 : j = t77
	movl	-408(%rbp), %eax
	movl	%eax, -16(%rbp)
.L27:

# 184 : t78 = 2
	movl	$2, %eax
	movl	%eax, -412(%rbp)

# 185 : if j < t78 goto 191
	movl	-16(%rbp), %eax
	cmpl	-412(%rbp), %eax
	jl		.L29

# 186 : goto 179
	jmp		.L25

# 187 : goto 200
	jmp		.L30
.L28:

# 188 : t79 = j
	movl	-16(%rbp), %eax
	movl	%eax, -416(%rbp)

# 189 : j = j + 1
	movl	-16(%rbp), %eax
	movl	$1, %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)

# 190 : goto 184
	jmp		.L27
.L29:

# 191 : t80 = j * 4
	movl	-16(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -420(%rbp)

# 192 : t81 = i * 2
	movl	-12(%rbp), %eax
	movl	$2, %edx
	imull	%edx, %eax
	movl	%eax, -424(%rbp)

# 193 : t82 = t81 * 4
	movl	-424(%rbp), %eax
	movl	$4, %edx
	imull	%edx, %eax
	movl	%eax, -428(%rbp)

# 194 : t83 = t82 + 8
	movl	-428(%rbp), %eax
	movl	$8, %edx
	addl	%edx, %eax
	movl	%eax, -432(%rbp)

# 195 : t80 = t80 + t83
	movl	-420(%rbp), %eax
	movl	-432(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -420(%rbp)

# 196 : t84 = m3[t80]
	movl	-420(%rbp), %eax
	movl	-116(%rbp, %rax), %edx
	movl	%edx, -436(%rbp)

# 197 : param t84
	movq	-436(%rbp), %rax
	movq	%rax, %rdi
	pushq	%rax

# 198 : t85 = call printInt, 1
	call	printInt
	addq	$12, %rsp
	movq	%rax, -440(%rbp)

# 199 : goto 188
	jmp		.L28
.L30:

# 200 : goto 179
	jmp		.L25
.L31:

# 201 : t86 = 0
	movl	$0, %eax
	movl	%eax, -444(%rbp)

# 202 : return t86
	movq	-444(%rbp), %rax
	leave
	ret

# 203 : end main 

	leave
	ret
	.size	main, .-main
