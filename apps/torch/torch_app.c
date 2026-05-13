#include "torch.h"
#include "keypad_driver.h"
void torch_app(void) {
    torch_init();
    int on=0;
    while(1) {
        if(keypad_get_key() & 1) { on=!on; if(on) torch_on(); else torch_off(); }
        if(keypad_get_key() & 2048) break;
    }
    torch_off();
}