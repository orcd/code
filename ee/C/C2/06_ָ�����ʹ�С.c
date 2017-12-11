#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//32位编译器，指针大小为32位，4字节
	//64位编译器，指针大小为64位，8字节
	printf("%d, %d, %d\n", sizeof(char **********), sizeof(char *), sizeof(double *));


	printf("\n");
	system("pause");
	return 0;
}
