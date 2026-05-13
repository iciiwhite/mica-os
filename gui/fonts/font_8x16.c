#include "font.h"
static const uint8_t font8x16[][16] = {0};
const uint8_t* font_get_8x16(char c) { return font8x16[c-32]; }