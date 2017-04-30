#include "main.h"
void read_key()
{
    if(BUTTON == PRESS)             // nhan nut
    {
        delay_ms(20);               //chong doi phim
        
        if(BUTTON == PRESS)         //kiem tra lai xem nut nhan co nhan hay khong
        {
            while(BUTTON == PRESS); // cho nha nut
            LED = ~ LED;            // dao trang thai cua led
        }   
    }
}