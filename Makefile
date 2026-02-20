kernel_source_files := $(shell find src/impl/kernel -name *.c)
kernel_object_files := $(patsubst src/impl/kernel/%.c, build/kernel/%.o, $(kernel_source_files))

x86_64_c_source_files := $(shell find src/impl/x86_64 -name *.c)
x86_64_c_object_files := $(patsubst src/impl/x86_64/%.c, build/x86_64/%.o, $(x86_64_c_source_files))

x86_64_asm_source_files := $(shell find src/impl/x86_64 -name *.asm)
x86_64_asm_object_files := $(patsubst src/impl/x86_64/%.asm, build/x86_64/%.o, $(x86_64_asm_source_files))

boot_source := src/impl/x86_64/boot/header.asm src/impl/x86_64/boot/main.asm src/impl/x86_64/boot/main64.asm
boot_object_files := $(patsubst src/impl/x86_64/boot/%.asm, build/x86_64/boot/%.o, $(boot_source))

x86_64_object_files := $(x86_64_c_object_files) $(x86_64_asm_object_files) $(boot_object_files)




# Generate build date header
DATE_FILE := src/intf/build_date.h
DATE := $(shell date +"%Y-%m-%d %H:%M:%S")

$(DATE_FILE):
	mkdir -p $(dir $@) && \
	echo "#define BUILD_DATE \"$(DATE)\"" > $(DATE_FILE)

# Boot files
build/x86_64/boot/%.o: src/impl/x86_64/boot/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 $< -o $@

# Kernel files
$(kernel_object_files): build/kernel/%.o : src/impl/kernel/%.c $(DATE_FILE)
	mkdir -p $(dir $@) && \
	x86_64-elf-gcc -c -I src/intf -I build -ffreestanding $(patsubst build/kernel/%.o, src/impl/kernel/%.c, $@) -o $@

# x86_64 C files
$(x86_64_c_object_files): build/x86_64/%.o : src/impl/x86_64/%.c $(DATE_FILE)
	mkdir -p $(dir $@) && \
	x86_64-elf-gcc -c -I src/intf -I build -ffreestanding $(patsubst build/x86_64/%.o, src/impl/x86_64/%.c, $@) -o $@

# x86_64 assembly files
$(x86_64_asm_object_files): build/x86_64/%.o : src/impl/x86_64/%.asm
	mkdir -p $(dir $@) && \
	nasm -f elf64 $(patsubst build/x86_64/%.o, src/impl/x86_64/%.asm, $@) -o $@

.PHONY: build-x86_64
build-x86_64: $(DATE_FILE) $(kernel_object_files) $(x86_64_object_files)
	mkdir -p dist/x86_64 && \
	x86_64-elf-ld -n -o dist/x86_64/kernel.bin -T targets/x86_64/linker.ld $(kernel_object_files) $(x86_64_object_files) && \
	cp dist/x86_64/kernel.bin targets/x86_64/iso/boot/kernel.bin && \
	grub-mkrescue /usr/lib/grub/i386-pc -o dist/x86_64/kernel.iso targets/x86_64/iso
