#include "browser.h"
#include "window.h"
#include "http.h"
void browser_run(void) {
    int win=window_create("Browser",0,0,200,200);
    char url[64]="http://example.com";
    char *html = http_get(url);
    (void)html;
    eink_clear();
    eink_draw_string("Browser stub",10,30,0);
    window_draw(win);
    while(!(keypad_get_key() & 2048));
}