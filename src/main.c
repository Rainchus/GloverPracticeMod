#include "types.h"

#define SCREEN_WIDTH 320
// Define white color in RGB565 format
#define WHITE 0xFFFF

void func_80145680(int);
void PrintChar(char*, char);
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
s32 FrameCounter = 0;

void DrawHookC(u16* frameBufToSwapTo) {
    FrameCounter++;
    if (FrameCounter < 208 && FrameCounter > 80) {
        draw_string(frameBufToSwapTo, 10, 10, "github.com/Rainchus/GloverPracticeMod", WHITE);
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