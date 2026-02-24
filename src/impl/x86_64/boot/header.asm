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

    ; Multiboot2 framebuffer request tag
    ;dw 5     ; type = framebuffer request
    ;dw 0     ; flags = 0
    ;dd 20    ; size of this tag
    ;dd 1024  ; width
    ;dd 768   ; height
    ;dd 32     ; depth (bpp)

    ; terminating tag
    dw 0
    dw 0
    dd 8
header_end: