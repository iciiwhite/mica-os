#include "flashlight.h"
#include "torch.h"
void flashlight_run(void) { torch_init(); torch_on(); while(!(keypad_get_key()&2048)); torch_off(); }