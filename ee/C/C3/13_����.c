#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	printf("%x\n", ~(~0 << 8));

	unsigned int a = 0x12345678;
	unsigned int b;

	b = (a >> 8) & (~(~0 << 8));
	printf("b = %x\n", b);


	printf("\n");
	system("pause");
	return 0;
}


int main02(void)
{
	printf("%x\n", ~0xffffffff);
	printf("%x\n", ~0);

	unsigned int mask = ~0;
	printf("%x\n", mask >> 24);
	printf("%x\n", (mask >> 24) << 8); //0x0000ff00

	unsigned int a = 0x12345678;
	a = (a &  (((unsigned int)~0 >> 24) << 8)) >> 8;
	printf("a = %x\n", a);


	printf("\n");
	system("pause");
	return 0;
}

int main01(void)
{
	unsigned int a = 0x12345678;
	unsigned int mask = 0x0000ff00;

	a = (a & mask) >> 8;
	printf("a = %x\n", a);

	printf("\n");
	system("pause");
	return 0;
}
