#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
#pragma pack(2)	
	struct
	{
		char a;
		int b;
		short c;
	}A;
	printf("%d\n", sizeof(A));


	printf("\n");
	system("pause");
	return 0;
}
