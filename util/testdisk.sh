# Create a 64 MB file
dd if=/dev/zero of=fat.img bs=1M count=64

# Format it as FAT12 or FAT16
mkfs.fat -F 16 fat.img
