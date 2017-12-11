#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	unsigned char a = 1;
	unsigned char b = 1;
	printf("a & b = %d, a&&b = %d\n", a&b, a&&b);

	a = 1;
	b = 2;
	printf("a & b = %d, a&&b = %d\n", a&b, a&&b);


	printf("\n");
	system("pause");
	return 0;
}
