	.file	"p1012_bignum.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
.lcomm _ZStL8__ioinit,1,1
	.globl	_Z4numsB5cxx11
	.bss
	.align 32
_Z4numsB5cxx11:
	.space 9600
	.globl	len
	.align 4
len:
	.space 4
	.text
	.globl	_Z3cmpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_
	.def	_Z3cmpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z3cmpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_
_Z3cmpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_:
.LFB1547:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	strcmp
	testl	%eax, %eax
	setg	%al
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E
	.def	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E
_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E:
.LFB1548:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$248, %rsp
	.seh_stackalloc	248
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, 144(%rbp)
	movl	%edx, 152(%rbp)
	movl	%r8d, 160(%rbp)
	movq	%r9, 168(%rbp)
	movl	152(%rbp), %edx
	movl	160(%rbp), %eax
	addl	%edx, %eax
	movl	%eax, %edx
	shrl	$31, %edx
	addl	%edx, %eax
	sarl	%eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	addq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
.LEHB0:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE0:
	movl	152(%rbp), %eax
	movl	%eax, 108(%rbp)
	movl	160(%rbp), %eax
	movl	%eax, 104(%rbp)
.L5:
	leaq	-64(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
.LEHB1:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE1:
	movl	108(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	addq	%rax, %rdx
	movq	%rbp, %rax
	movq	%rax, %rcx
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE2:
	leaq	-32(%rbp), %rdx
	movq	%rbp, %rax
	movq	168(%rbp), %r8
	movq	%rax, %rcx
.LEHB3:
	call	*%r8
.LEHE3:
	movl	%eax, %ebx
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	testb	%bl, %bl
	je	.L4
	addl	$1, 108(%rbp)
	jmp	.L5
.L4:
	movl	104(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	addq	%rax, %rdx
	leaq	32(%rbp), %rax
	movq	%rax, %rcx
.LEHB4:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE4:
	leaq	-64(%rbp), %rdx
	leaq	64(%rbp), %rax
	movq	%rax, %rcx
.LEHB5:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE5:
	leaq	32(%rbp), %rdx
	leaq	64(%rbp), %rax
	movq	168(%rbp), %r8
	movq	%rax, %rcx
.LEHB6:
	call	*%r8
.LEHE6:
	movl	%eax, %ebx
	leaq	64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	testb	%bl, %bl
	je	.L6
	subl	$1, 104(%rbp)
	jmp	.L4
.L6:
	movl	108(%rbp), %eax
	cmpl	104(%rbp), %eax
	jg	.L7
	movl	108(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	addq	%rax, %rdx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
.LEHB7:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE7:
	movl	104(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	addq	%rax, %rdx
	movl	108(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	movq	144(%rbp), %rax
	addq	%rcx, %rax
	movq	%rax, %rcx
.LEHB8:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
	movl	104(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	movq	144(%rbp), %rax
	leaq	(%rdx,%rax), %rcx
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
.LEHE8:
	addl	$1, 108(%rbp)
	subl	$1, 104(%rbp)
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.L7:
	movl	108(%rbp), %eax
	cmpl	104(%rbp), %eax
	jg	.L8
	jmp	.L5
.L8:
	movl	152(%rbp), %eax
	cmpl	104(%rbp), %eax
	jge	.L9
	movq	168(%rbp), %rcx
	movl	104(%rbp), %edx
	movl	152(%rbp), %eax
	movq	%rcx, %r9
	movl	%edx, %r8d
	movl	%eax, %edx
	movq	144(%rbp), %rcx
.LEHB9:
	call	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E
.L9:
	movl	108(%rbp), %eax
	cmpl	160(%rbp), %eax
	jge	.L10
	movq	168(%rbp), %rcx
	movl	160(%rbp), %edx
	movl	108(%rbp), %eax
	movq	%rcx, %r9
	movl	%edx, %r8d
	movl	%eax, %edx
	movq	144(%rbp), %rcx
	call	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E
.LEHE9:
.L10:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L23
.L19:
	movq	%rax, %rbx
	movq	%rbp, %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L12
.L18:
	movq	%rax, %rbx
.L12:
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L13
.L21:
	movq	%rax, %rbx
	leaq	64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L15
.L20:
	movq	%rax, %rbx
.L15:
	leaq	32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L13
.L22:
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L13
.L17:
	movq	%rax, %rbx
.L13:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB10:
	call	_Unwind_Resume
	nop
.LEHE10:
.L23:
	addq	$248, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1548:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1548-.LLSDACSB1548
.LLSDACSB1548:
	.uleb128 .LEHB0-.LFB1548
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1548
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L17-.LFB1548
	.uleb128 0
	.uleb128 .LEHB2-.LFB1548
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L18-.LFB1548
	.uleb128 0
	.uleb128 .LEHB3-.LFB1548
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L19-.LFB1548
	.uleb128 0
	.uleb128 .LEHB4-.LFB1548
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L17-.LFB1548
	.uleb128 0
	.uleb128 .LEHB5-.LFB1548
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L20-.LFB1548
	.uleb128 0
	.uleb128 .LEHB6-.LFB1548
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L21-.LFB1548
	.uleb128 0
	.uleb128 .LEHB7-.LFB1548
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L17-.LFB1548
	.uleb128 0
	.uleb128 .LEHB8-.LFB1548
	.uleb128 .LEHE8-.LEHB8
	.uleb128 .L22-.LFB1548
	.uleb128 0
	.uleb128 .LEHB9-.LFB1548
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L17-.LFB1548
	.uleb128 0
	.uleb128 .LEHB10-.LFB1548
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSE1548:
	.text
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
.LFB1549:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	call	_Z5inputv
	call	_Z8compoundv
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "%d\0"
	.text
	.globl	_Z5inputv
	.def	_Z5inputv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5inputv
_Z5inputv:
.LFB1550:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	leaq	len(%rip), %rdx
	leaq	.LC0(%rip), %rcx
	call	scanf
	movl	$1, -4(%rbp)
.L28:
	movl	len(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jg	.L27
	movl	-4(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt3cin(%rip), %rcx
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	addl	$1, -4(%rbp)
	jmp	.L28
.L27:
	movl	len(%rip), %eax
	leaq	_Z3cmpNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES4_(%rip), %r9
	movl	%eax, %r8d
	movl	$1, %edx
	leaq	_Z4numsB5cxx11(%rip), %rcx
	call	_Z9quicksortPNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiiPFbS4_S4_E
	nop
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z8compoundv
	.def	_Z8compoundv;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z8compoundv
_Z8compoundv:
.LFB1551:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$152, %rsp
	.seh_stackalloc	152
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	$1, 12(%rbp)
.L32:
	movl	len(%rip), %eax
	cmpl	%eax, 12(%rbp)
	jg	.L30
	movl	12(%rbp), %eax
	addl	$1, %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movl	12(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rax, %rdx
	leaq	-96(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB11:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
.LEHE11:
	movl	12(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	movl	12(%rbp), %eax
	addl	$1, %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rax, %rdx
	leaq	-64(%rbp), %rax
	movq	%rcx, %r8
	movq	%rax, %rcx
.LEHB12:
	call	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
.LEHE12:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv
	movq	%rbx, %rdx
	movq	%rax, %rcx
	call	strcmp
	shrl	$31, %eax
	testb	%al, %al
	je	.L31
	movl	12(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rax, %rdx
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
.LEHB13:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE13:
	movl	12(%rbp), %eax
	addl	$1, %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rax, %rdx
	movl	12(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rcx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rcx, %rax
	movq	%rax, %rcx
.LEHB14:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
	movl	12(%rbp), %eax
	addl	$1, %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	leaq	(%rdx,%rax), %rcx
	leaq	-32(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_
.LEHE14:
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
.L31:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	addl	$1, 12(%rbp)
	jmp	.L32
.L30:
	movl	$1, 8(%rbp)
.L34:
	movl	len(%rip), %eax
	cmpl	%eax, 8(%rbp)
	jg	.L41
	movl	8(%rbp), %eax
	cltq
	salq	$5, %rax
	movq	%rax, %rdx
	leaq	_Z4numsB5cxx11(%rip), %rax
	addq	%rdx, %rax
	movq	%rax, %rdx
	movq	.refptr._ZSt4cout(%rip), %rcx
.LEHB15:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	addl	$1, 8(%rbp)
	jmp	.L34
.L40:
	movq	%rax, %rbx
	leaq	-32(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L36
.L39:
	movq	%rax, %rbx
.L36:
	leaq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L37
.L38:
	movq	%rax, %rbx
.L37:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
	call	_Unwind_Resume
.LEHE15:
.L41:
	nop
	addq	$152, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1551:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1551-.LLSDACSB1551
.LLSDACSB1551:
	.uleb128 .LEHB11-.LFB1551
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB12-.LFB1551
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L38-.LFB1551
	.uleb128 0
	.uleb128 .LEHB13-.LFB1551
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L39-.LFB1551
	.uleb128 0
	.uleb128 .LEHB14-.LFB1551
	.uleb128 .LEHE14-.LEHB14
	.uleb128 .L40-.LFB1551
	.uleb128 0
	.uleb128 .LEHB15-.LFB1551
	.uleb128 .LEHE15-.LEHB15
	.uleb128 0
	.uleb128 0
.LLSDACSE1551:
	.text
	.seh_endproc
	.section	.text$_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,"x"
	.linkonce discard
	.globl	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
	.def	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_
_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_:
.LFB1797:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	%r8, -48(%rbp)
	movq	-56(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB16:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
.LEHE16:
	movq	-48(%rbp), %rax
	movq	%rax, %rdx
	movq	-64(%rbp), %rcx
.LEHB17:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_
.LEHE17:
	jmp	.L46
.L45:
	movq	%rax, %rbx
	movq	-64(%rbp), %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB18:
	call	_Unwind_Resume
.LEHE18:
.L46:
	movq	-64(%rbp), %rax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1797:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1797-.LLSDACSB1797
.LLSDACSB1797:
	.uleb128 .LEHB16-.LFB1797
	.uleb128 .LEHE16-.LEHB16
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB17-.LFB1797
	.uleb128 .LEHE17-.LEHB17
	.uleb128 .L45-.LFB1797
	.uleb128 0
	.uleb128 .LEHB18-.LFB1797
	.uleb128 .LEHE18-.LEHB18
	.uleb128 0
	.uleb128 0
.LLSDACSE1797:
	.section	.text$_ZStplIcSt11char_traitsIcESaIcEENSt7__cxx1112basic_stringIT_T0_T1_EERKS8_SA_,"x"
	.linkonce discard
	.seh_endproc
	.text
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2047:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__tcf_1;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_1
__tcf_1:
.LFB2048:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	leaq	9600+_Z4numsB5cxx11(%rip), %rbx
.L50:
	leaq	_Z4numsB5cxx11(%rip), %rax
	cmpq	%rax, %rbx
	je	.L48
	subq	$32, %rbx
	movq	%rbx, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L50
.L48:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2046:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rsi
	.seh_pushreg	%rsi
	pushq	%rbx
	.seh_pushreg	%rbx
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 32(%rbp)
	movl	%edx, 40(%rbp)
	cmpl	$1, 32(%rbp)
	jne	.L55
	cmpl	$65535, 40(%rbp)
	jne	.L55
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
	leaq	_Z4numsB5cxx11(%rip), %rax
	movl	$299, %ebx
	movq	%rax, %rsi
.L54:
	testq	%rbx, %rbx
	js	.L53
	movq	%rsi, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	addq	$32, %rsi
	subq	$1, %rbx
	jmp	.L54
.L53:
	leaq	__tcf_1(%rip), %rcx
	call	atexit
.L55:
	nop
	addq	$32, %rsp
	popq	%rbx
	popq	%rsi
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__Z4numsB5cxx11;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__Z4numsB5cxx11
_GLOBAL__sub_I__Z4numsB5cxx11:
.LFB2049:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__Z4numsB5cxx11
	.ident	"GCC: (x86_64-win32-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNKSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE5c_strEv;	.scl	2;	.type	32;	.endef
	.def	strcmp;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEaSERKS4_;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE6appendERKS4_;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev;	.scl	2;	.type	32;	.endef
	.section	.rdata$.refptr._ZSt4cout, "dr"
	.globl	.refptr._ZSt4cout
	.linkonce	discard
.refptr._ZSt4cout:
	.quad	_ZSt4cout
	.section	.rdata$.refptr._ZSt3cin, "dr"
	.globl	.refptr._ZSt3cin
	.linkonce	discard
.refptr._ZSt3cin:
	.quad	_ZSt3cin
