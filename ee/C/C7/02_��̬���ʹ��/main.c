#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "myadd.h"

#pragma comment(lib,"./02_动态库的使用/mydll.lib")

int main(void)
{
	printf("result = %d\n", my_add(1, 1));


	printf("\n");
	system("pause");
	return 0;
}
