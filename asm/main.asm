
//Automatically generated by configure.py, do not edit
.n64 // Let armips know we're coding for the N64 architecture
.open "rom/glover.z64", "rom/glover.mod.z64", 0 // Open the ROM file
.include "asm\bootPatch.asm"
.include "asm\symbols.asm"

.headersize 0x7FC80000
.org 0x80400000
PAYLOAD_START_RAM:
.include "asm\hooks.s"
.importobj "obj\font.o"
.importobj "obj\main.o"

.align 8
PAYLOAD_END_RAM:
.close //close file
