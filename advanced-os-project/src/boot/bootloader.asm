section .text
    global _start

_start:
    ; Set up the stack
    cli                     ; Disable interrupts
    xor ax, ax             ; Clear AX register
    mov ds, ax             ; Set DS to 0
    mov es, ax             ; Set ES to 0
    mov ss, ax             ; Set SS to 0
    mov sp, 0x7c00         ; Set stack pointer

    ; Load the kernel
    call load_kernel

    ; Jump to the kernel
    jmp 0x1000             ; Jump to the kernel's entry point

load_kernel:
    ; Load the kernel from disk
    mov si, kernel_name    ; Kernel name
    mov bx, 0x1000         ; Load address for the kernel
    call read_sector        ; Read the kernel sector
    ret

read_sector:
    ; Read a sector from disk (implementation not shown)
    ; This function should read a sector from the disk into memory
    ret

section .data
kernel_name db 'myos.bin', 0

section .bss
    ; Uninitialized data section (if needed)