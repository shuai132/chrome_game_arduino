#include "game/game_engine_port_arduino.h"
#include "game/chrome_game.h"

void setup() {
    ScreenConfig c{};
    c.SCREEN_WIDTH = OLED_WIDTH;
    c.SCREEN_HEIGHT = OLED_HEIGHT;
    c.PER_CHAR_WIDTH = 6;
    c.fps = 120;
    c.canvas = new Screen;
    start_game(&c);
}

void loop() {
}
