SECTIONS
{
    .boot :
    {
        KEEP(*(.multiboot_header))
    }
    .text :
    {
        *(.text)
    }
}
