/*
��������Լ��ĵ�Ƭ�������ַ�ת������
*/


#include "myusart.h"

/*
this functiion is used to ��ʮ��λ������ʮ�����ַ���
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


