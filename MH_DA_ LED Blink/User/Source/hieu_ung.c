#include "main.h"

void hieu_ung_1(void)
{
    unsigned char i;
    for(i=0;i<8;i++)
    {
        LED_PORT = 0x01;
        LED_PORT <<=i;
        delay_ms(100);
    }
}
void hieu_ung_2(void)
{
    unsigned char i;
    for(i=0;i<8;i++)
    {
        LED_PORT = 0x80;
        LED_PORT >>=i;
        delay_ms(100);
    }
}
void hieu_ung_3(void)
{
    LED_PORT =0x00;
    delay_ms(200);
    LED_PORT = 0xff;
    delay_ms(200);
}
void hieu_ung_4(void)
{
    LED_PORT = 0xAA;
    delay_ms(300);
    LED_PORT = 0x55;
    delay_ms(300);
  
}
void hieu_ung_5(void)
{
    unsigned char i, high_byte, low_byte;
    for(i=0;i<4;i++)
    {
        high_byte = 0x80>>(i+4);
        low_byte  = 0x01<<i;
        LED_PORT = (high_byte<<4)|low_byte;
        delay_ms(100);
    }
    
}
void hieu_ung_6(void)
{
    unsigned char i, high_byte, low_byte;
    for(i=0;i<4;i++)
    {
        high_byte = (0x10<<i)>>4;
        low_byte  = 0x08>>i;
        LED_PORT = (high_byte<<4)|low_byte;
        delay_ms(100);
    }
}
void hieu_ung_7(void)
{
    LED_PORT = 0xF0;
    delay_ms(400);
    LED_PORT = 0x0F;
    delay_ms(400);
}
void hieu_ung_8(void)
{
    unsigned char i;
    //LED_PORT = 0x00;
    for(i=0;i<=8;i++)
    {
        LED_PORT = 0x03;
        LED_PORT<<=i;
        delay_ms(200);
    }
}
void hieu_ung_9(void)
{
    unsigned char i;
    //LED_PORT = 0x00;
    for(i=0;i<=9;i++)
    {
        LED_PORT = 0x07;
        LED_PORT<<=i;
        delay_ms(200);
    }
}
void hieu_ung_10(void)
{
    unsigned char i, high_byte, low_byte;
    for(i=0;i<4;i++)
    {
        high_byte = 0xC0>>(i+4);
        low_byte  = 0x03<<i;
        LED_PORT = (high_byte<<4)|low_byte;
        delay_ms(100);
    }
}