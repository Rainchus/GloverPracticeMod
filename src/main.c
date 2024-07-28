#include "types.h"

#define SCREEN_WIDTH 320
// Define colors in RGB565 format
#define WHITE       0xFFFF  // 255, 255, 255
#define BLACK       0x0000  // 0, 0, 0
#define RED         0xF800  // 255, 0, 0
#define GREEN       0x07E0  // 0, 255, 0
#define BLUE        0x001F  // 0, 0, 255
#define YELLOW      0xFFE0  // 255, 255, 0
#define CYAN        0x07FF  // 0, 255, 255
#define MAGENTA     0xF81F  // 255, 0, 255
#define GRAY        0x8410  // 128, 128, 128
#define ORANGE      0xFD20  // 255, 165, 0
#define PINK        0xF81F  // 255, 192, 203
#define PURPLE      0x780F  // 128, 0, 128
#define BROWN       0xA145  // 165, 42, 42
#define LIGHT_GRAY  0xC618  // 192, 192, 192
#define DARK_GRAY   0x4A49  // 74, 74, 74
#define LIGHT_GREEN 0x07EF  // 144, 238, 144
#define DARK_GREEN  0x03E0  // 0, 128, 0
#define LIGHT_BLUE  0xAEDC  // 173, 216, 230
#define DARK_BLUE   0x0010  // 0, 0, 139

void func_80145680(int);
void PrintChar(char*, char);
extern u8 gGameMode;
extern int textXPos;
extern int textYPos;
extern const u8 font[256][8];



// Draw a single pixel to the framebuffer
void draw_pixel(u16 *framebuffer, int x, int y, u16 color) {
    framebuffer[y * SCREEN_WIDTH + x] = color;
}

// Draw a single character to the framebuffer
void draw_char(u16 *framebuffer, int x, int y, char c, u16 color) {
    // This is a simple 8x8 font, represented as an array of 8 bytes per character
    extern const u8 font[256][8];

    for (int i = 0; i < 8; i++) {
        u8 line = font[(unsigned char)c][i];
        for (int j = 0; j < 8; j++) {
            if (line & (1 << (7 - j))) {
                draw_pixel(framebuffer, x + j, y + i, color);
            }
        }
    }
}

// Draw a string to the framebuffer
void draw_string(u16 *framebuffer, int x, int y, const char *str, u16 color) {
    while (*str) {
        draw_char(framebuffer, x, y, *str++, color);
        x += 8;  // Move to the next character position
    }
}

//current frame buffer* 801F4704

extern u16* curFrameBuffer;
extern u16* curFrameBuffer2;

u16* GetCurrentFrameBuffer(void);
void osViSwapBuffer(u16*);
s32 frameCounter = 0;
s32 drawBool = 0;
void osWritebackDCacheAll(void);
void osInvalDCache(void*, s32);

void DrawHookC(u16* frameBufToSwapTo) {
    frameCounter++;
    if (frameCounter < 208 && frameCounter > 80) {
        osInvalDCache((void*)0x80000000, 0x2000);
        draw_string(frameBufToSwapTo, 10, 10, "github.com/Rainchus/GloverPracticeMod", WHITE);
        osWritebackDCacheAll();
    }

    osViSwapBuffer(frameBufToSwapTo);
}

int perFrameHookC(void) {
    // u16* curFrameBuf = GetCurrentFrameBuffer();
    // //draw_string(framebuffer, 10, 10, "A", WHITE); //
    // draw_string(curFrameBuf, 10, 10, "TEST PRINT!", WHITE);
    //Print a 'P' doesn't work for some reason?
    //textXPos = 0xDB;
    //textYPos = 0xA0;
    //PrintChar((char*)0x801EC908, 'P');
    return 1;
}