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
    JAL 0x80145680 //restore from hook
    NOP
    J 0x8012C71C //return from hook
    NOP

perFrameHook2:
    JAL perFrameHookC
    NOP
    J 0x8013DC20 //restore from hook
    NOP

perFrameHook3:
    JAL perFrameHookC
    NOP
    LUI v0, 0x801F
    LBU v0, 0xC7D2 (v0)
    J 0x8012C5E8
    NOP

drawHook:
    LW v0, 0x0014 (fp)
    LW a0, 0x000C (v0)
    JAL DrawHookC
    NOP
    J 0x8017FF20
    NOP