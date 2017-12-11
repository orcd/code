#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int * p = &a;

	//通过*p间接操作内存
	*p = 111;
	//*和[]等价
	p[0] = 222; // *(p+0) ===> *p
	printf("%d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
