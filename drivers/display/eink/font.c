#include "font.h"
static const uint8_t font_6x8[96][6] = {0};
const uint8_t* font_get_glyph(char c) { return font_6x8[c-32]; }