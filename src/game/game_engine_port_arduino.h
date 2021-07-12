#include "game/game_engine_port.h"
#include <Arduino.h>
#include "OLED.h"

struct Screen : public ge::Canvas {
    Screen() {
        u8g2.begin();
        u8g2.setFont(u8g2_font_6x10_tf);
    }

    void onClear() override {
        u8g2.clearBuffer();
    }

    void onDraw() override {
        u8g2.sendBuffer();
    }

    void drawBitmap(uint16_t x, uint16_t y, const uint8_t* bitmap, uint16_t w, uint16_t h, uint16_t color) override {
        u8g2.drawBitmap(x, y, ceil((double)w / 8), h, bitmap);
    }

    size_t drawBuffer(uint16_t x, uint16_t y, const char *buffer, size_t len) override {
        return u8g2.drawStr(x, y+10, buffer);
    }
};
