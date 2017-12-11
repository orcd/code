#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	unsigned char a;
	a = 0x2f;

	//a = a & 0xf0;
	a &= 0xf0;
	printf("a = %x\n", a);


	printf("\n");
	system("pause");
	return 0;
}
