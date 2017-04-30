#ifndef _MAIN_H_
#define _MAIN_H_   

typedef unsigned char       uint8_t;
typedef unsigned int        uint16_t;
typedef unsigned long int   uint32_t;

typedef signed char         int8_t;
typedef signed int          int16_t;
typedef signed long int     int32_t;

typedef float               float32_t;

#include "defstm8s.h"

#include <stm8s_clk.h>
#include <stm8s_exti.h>
#include "user_delay.h"
#include "user_gpio.h"
#include "read_key.h"
#include "hieu_ung.h"

#define LED         PORTE_5
#define ON          0
#define OFF         1

#define BUTTON      PINC_4
#define PRESS       0
#define NOT_PRESS   1

#define LED_PORT    PORTD

#endif


