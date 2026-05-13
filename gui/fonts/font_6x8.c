#include "font.h"
static const uint8_t font_data[96][6] = {0};
const uint8_t* font_get_glyph(char c) { return font_data[c-32]; }