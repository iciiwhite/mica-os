.global _start
.section .text
_start:
    ldr sp, =_stack_top
    bl kernel_main
    b .