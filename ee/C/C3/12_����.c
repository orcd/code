#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 0xffffffff;
	printf("a >> 1 = %x\n", a>>1); //Ëã·¨ÓÒÒÆ£¬ÓÒ±ß¶ªÆú×ó±ß²¹1
	printf("a >> 2 = %x\n", a >> 2);

	unsigned int  b = 0xffffffff; //ÎÞ·ûºÅ£¬ÓÒ±ß¶ª×ó±ß²¹0
	printf("b >> 1 = %x\n", b >> 1);
	printf("b >> 2 = %x\n", b >> 2);
	printf("b >> 31 = %x\n", b >> 31);

	unsigned int  c = 0xffffffff; //ÎÞ·ûºÅ£¬ÓÒ±ß¶ª×ó±ß²¹0
	//printf("c >> 32 = %x\n", c >> 32); //³¬¹ý·¶Î§

	//c >>= 31;
	c = c >> 31;
	printf("c = %x\n", c);
	c = c >> 1;
	printf("c = %x\n", c);

	printf("\n");
	system("pause");
	return 0;
}
