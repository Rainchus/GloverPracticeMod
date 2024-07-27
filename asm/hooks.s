bssClear:
    LUI sp, 0x8026
    ADDIU sp, sp, -0xEA8
    LUI t0, 0x801F
    ADDIU t0, t0, 0x5680
    LUI t1, 0x802B
    ADDIU t1, t1, 0x0D10
    BEQ t0, t1, bssClearBreak
    NOP
    bssClearLoop:
    ADDIU t0, t0, 0x0004
    SLTU at, t0, t1
    BNEZ at, bssClearLoop
    SW r0, 0xFFFC (t0)
    bssClearBreak:
    JAL 0x80139DE8
    NOP

perFrameHook:
JAL perFrameHookC
NOP
JAL 0x80145680
NOP
J 0x8012C71C
NOP