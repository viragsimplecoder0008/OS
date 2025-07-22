CC = g++
ASM = nasm
CFLAGS = -Iinclude -ffreestanding -c
LDFLAGS = -T linker.ld -o advanced-os.bin
SRC = src/kernel/kernel.cpp src/drivers/disk.cpp src/drivers/video.cpp src/tasks/scheduler.cpp src/input/mouse.cpp src/gui/desktop.cpp src/gui/taskbar.cpp src/gui/wallpaper.cpp
OBJ = kernel.o disk.o video.o scheduler.o mouse.o desktop.o taskbar.o wallpaper.o
BOOT = src/boot/bootloader.asm
BOOT_OBJ = bootloader.o

all: advanced-os.img

advanced-os.img: $(BOOT) $(SRC)
	nasm -f bin $(BOOT) -o bootloader.bin
	$(CC) $(CFLAGS) $(SRC)
	ld $(LDFLAGS) $(OBJ) bootloader.bin

clean:
	rm -f $(OBJ) $(BOOT_OBJ) advanced-os.bin bootloader.bin advanced-os.img

run: advanced-os.bin
	qemu-system-x86_64 advanced-os.bin