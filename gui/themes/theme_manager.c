#include "theme_manager.h"
#include "theme.h"
static uint8_t *bg=&theme_bg_color;
static uint8_t *fg=&theme_fg_color;
void theme_set(const char *name) { if(strcmp(name,"dark")==0) { *bg=0x00; *fg=0xFF; } else { *bg=0xFF; *fg=0x00; } }