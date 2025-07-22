#ifndef COMMON_H
#define COMMON_H

#include <stdint.h>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768

typedef uint8_t byte;
typedef uint32_t dword;

void clear_screen();
void draw_pixel(int x, int y, byte color);
void draw_string(int x, int y, const char* str, byte color);

#endif // COMMON_H