#include "OLED.h"
#include <Wire.h>

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT, &Wire, OLED_RST, 3400000UL);

