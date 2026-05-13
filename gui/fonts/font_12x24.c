#include "font.h"
static const uint8_t font12x24[][36] = {0};
const uint8_t* font_get_12x24(char c) { return font12x24[c-32]; }