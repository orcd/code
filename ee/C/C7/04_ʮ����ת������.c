#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void to_bin(int n)
{
	int num = n % 2;

	if (n >= 2)
	{
		to_bin(n/2);
	}

	printf("%d", num);
}

int main(void)
{
	int n = 56;
	to_bin(n);


	printf("\n");
	system("pause");
	return 0;
}
