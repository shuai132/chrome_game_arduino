#include "game/game_engine_port.h"
#include <Arduino.h>
#include "OLED.h"

struct Screen : public ge::Canvas {
    Screen() {
        Wire.begin(OLED_SDA, OLED_SCL);
        display.begin(SSD1306_SWITCHCAPVCC, 0x3c, true, false);
    }

    void onClear() override {
        display.clearDisplay();
    }

    void onDraw() override {
        display.display();
    }

    void drawBitmap(uint16_t x, uint16_t y, const uint8_t* bitmap, uint16_t w, uint16_t h, uint16_t color) override {
        display.drawBitmap(x, y, bitmap, w, h, color);
    }

    size_t drawBuffer(uint16_t x, uint16_t y, const char *buffer, size_t len) override {
        display.setCursor(x, y);
        display.setTextColor(WHITE);
        return display.write((const uint8_t*) buffer, len);
    }
};
