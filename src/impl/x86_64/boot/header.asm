;section .multiboot_header
;header_start:
	; magic number
;	dd 0xe85250d6 ; multiboot2
	; architecture
;	dd 0 ; protected mode i386
	; header length
;	dd header_end - header_start
	; checksum
;	dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start))

	; end tag
;	dw 0
;	dw 0
;	dd 8
;header_end:

section .multiboot_header
    align 8
header_start:
    dd 0xe85250d6 ; multiboot2
    dd 0                         ; architecture (i386)
    dd header_end - header_start ; header length
    dd 0x100000000 - (0xe85250d6 + 0 + (header_end - header_start)) ;checksum

framebuffer_tag_start:
    align 8
    dw  0x05    ;Type: framebuffer
    dw  0x01    ;Optional tag
    dd  framebuffer_tag_end - framebuffer_tag_start ;size
    dd  0   ;Width - if 0 we let the bootloader decide
    dd  0   ;Height - same as above
    dd  0   ;Depth  - same as above
framebuffer_tag_end:

    ; terminating tag
    align 8
    dw 0
    dw 0
    dd 8
header_end:
