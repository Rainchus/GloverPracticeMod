.headersize 0x800FF000
.org 0x80100000
    ADDU a0, r0, r0
    LI a1, 0x00780000 //0x800000 rom addr
    LI a2, PAYLOAD_START_RAM //0x80400000 ram addr
    JAL osPiRawStartDma
    LUI a3, 0x000C //dma 0.75 MB (update if more space needed)

    //wait on our dma to finish before continuing
    dmaBusyLoop:
    LUI t0, 0xA460
    LW t1, 0x0010 (t0)
    ANDI t1, t1, 0x0001
    BNEZ t1, dmaBusyLoop
    NOP
    JAL bssClear
    NOP

.org 0x8012C714
    J perFrameHook
    NOP

.org 0x8013DC10
    //J perFrameHook2
    //NOP

//.org 0x8012C5E0
    //J perFrameHook3
    //NOP

.org 0x8017FF10
    J drawHook
    NOP