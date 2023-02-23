
#ifndef __MYUSART_H
#define __MYUSART_H


#endif

#include "stdint.h"
#include "usart.h"


void mhex_to_strd(uint16_t MHEX,uint8_t *STRD);

# define UARTTIMEOUT 100
void Send_16s(UART_HandleTypeDef* uartHandle, uint16_t* data, uint8_t datanum);

