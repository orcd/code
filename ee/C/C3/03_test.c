#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *a[3];
	a[0] = "abc";
	a[1] = "123";
	a[2] = "mike";

	printf("%c, %c, %c\n", a[0][0], a[0][1], a[1][0]);


	printf("\n");
	system("pause");
	return 0;
}
