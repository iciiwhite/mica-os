#include "calculator.h"
#include "window.h"
#include "keypad_driver.h"
#include "eink_driver.h"
static int calc_eval(int a, char op, int b) { if(op=='+') return a+b; if(op=='-') return a-b; if(op=='*') return a*b; return a/b; }
void calculator_run(void) {
    int win=window_create("Calc",0,0,200,200);
    int result=0, current=0, op='+';
    char buf[16]="0";
    while(1) {
        eink_clear();
        eink_draw_string(buf,10,30,0);
        window_draw(win);
        uint16_t key=keypad_get_key();
        if(key&1) current=current*10+1;
        else if(key&2) current=current*10+2;
        else if(key&4) current=current*10+3;
        else if(key&8) current=current*10+4;
        else if(key&16) current=current*10+5;
        else if(key&32) current=current*10+6;
        else if(key&64) current=current*10+7;
        else if(key&128) current=current*10+8;
        else if(key&256) current=current*10+9;
        else if(key&512) current=current*10+0;
        else if(key&1024) { result=calc_eval(result,op,current); current=0; op='='; }
        else if(key&2048) break;
        sprintf(buf,"%d",current);
    }
}