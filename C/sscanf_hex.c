#include <stdio.h>
typedef unsigned char uint8;
typedef unsigned short uint16;
int main()
{
	uint8 yxVal = 0;
	uint8 bitNo = 0;
	uint16 addr = 0;
	sscanf("002C_01","%hx_%hhd",&addr, &bitNo);
	printf("%hd %hhd\n", addr, bitNo);
	
	uint16 uintVal = 0x01;
	uintVal = (uintVal>>bitNo) &(0x01);
	printf("%hd\n", uintVal);
	
	
	
	
	return 0;
}
