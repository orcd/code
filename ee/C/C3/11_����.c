#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	unsigned int a = 3;
	printf("a << 1 = %d\n", a << 1);
	printf("a << 2 = %d\n", a << 2);
	printf("a << 3 = %d\n", a << 3);
	printf("a << 6 = %d\n", a << 6);
	printf("a << 7 = %x\n", a << 7);
	printf("a << 33 = %x\n", a << 33);


	printf("\n");
	system("pause");
	return 0;
}
