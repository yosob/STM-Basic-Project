/*
这个是我自己的单片机串口字符转化函数
*/


#include "myusart.h"

/*
this functiion is used to 把十六位的数变十进制字符串
*/

void mhex_to_strd(uint16_t MHEX,uint8_t *STRD)
{
	int math[5];
	uint16_t copy_MHEX = MHEX;
	math[0] = MHEX / 10000;
	copy_MHEX = copy_MHEX - math[0] * 10000;
	math[1] = copy_MHEX / 1000;
	copy_MHEX = copy_MHEX - math[1] * 1000;
	math[2] = copy_MHEX / 100;
	copy_MHEX = copy_MHEX - math[2] * 100;
	math[3] = copy_MHEX / 10;
	copy_MHEX = copy_MHEX - math[3] * 10;
	math[4] = copy_MHEX;
	STRD[0] = '0' + math[0];
	STRD[1] = '0' + math[1];
	STRD[2] = '0' + math[2];
	STRD[3] = '0' + math[3];
	STRD[4] = '0' + math[4];

}


void Send_16s(UART_HandleTypeDef* uartHandle, uint16_t* data, uint8_t datanum)
{
	uint8_t senddata[2 * datanum];
	for(int data_ordernum = 0; data_ordernum < datanum;)
	{
		senddata[2*data_ordernum] = (data[data_ordernum] & 0xff00) >> 8;
		senddata[2*data_ordernum + 1] = data[data_ordernum] & 0xff;
		data_ordernum ++;
	}
	
	HAL_UART_Transmit(uartHandle, senddata, 2 * datanum, UARTTIMEOUT);
}