ENTRY(_start)
SECTIONS
{
    . = 0x8000000;
    .text : { *(.text) }
    .data : { *(.data) }
    .bss : { *(.bss) }
    _stack_top = . + 0x1000;
}