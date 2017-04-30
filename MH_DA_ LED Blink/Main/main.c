#include "main.h"
#include "var.h"

#pragma vector = 5 
__interrupt void NgatNgoaiPortA(void)
{
    LED=~LED;        
}

void main()
{   
    
    CLK_HSIPrescalerConfig(CLK_PRESCALER_HSIDIV1);// cai dat tan so thach anh noi 16MHz
    GPIO_Configuration();
    EXTI_SetExtIntSensitivity(EXTI_PORT_GPIOA,EXTI_SENSITIVITY_FALL_ONLY);
    while(1)    
    {
         //read_key();
        for(k=0;k<4;k++)
        {
            hieu_ung_1();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_2();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_3();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_4();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_5();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_6();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_7();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_8();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_9();
        }
        for(k=0;k<4;k++)
        {
            hieu_ung_10();
        }
    } 
}