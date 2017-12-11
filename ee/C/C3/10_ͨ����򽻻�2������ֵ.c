#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 10;
	int b = 20;

	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d, b = %d\n", a, b);


	printf("\n");
	system("pause");
	return 0;
}
