OUTPUT:

SECTIONS
{
    . = 0x100000; /* Start of the kernel in memory */
    
    .text : {
        *(.text)          /* All .text sections from object files */
        *(.text.*)        /* All .text.* sections from object files */
    }

    .data : {
        *(.data)          /* All .data sections from object files */
        *(.data.*)        /* All .data.* sections from object files */
    }

    .bss : {
        *(.bss)           /* All .bss sections from object files */
        *(.bss.*)         /* All .bss.* sections from object files */
        *(COMMON)         /* Common symbols */
    }

    /DISCARD/ : {
        *(.comment)       /* Discard comments */
        *(.note)          /* Discard notes */
    }
}