#pragma once

#include <Adafruit_SSD1306.h>

#ifdef OLED_128X64
#define OLED_SCREEN_WIDTH 128
#define OLED_SCREEN_HEIGHT 64
#elif defined(OLED_128X32)
#define OLED_SCREEN_WIDTH 128
#define OLED_SCREEN_HEIGHT 32
#else
#error
#endif

#define OLED_RESET     16
#define SCREEN_ADDRESS 0x3C

extern Adafruit_SSD1306 display;
