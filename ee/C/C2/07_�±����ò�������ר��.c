#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a;
	int * p = &a;

	//ͨ��*p��Ӳ����ڴ�
	*p = 111;
	//*��[]�ȼ�
	p[0] = 222; // *(p+0) ===> *p
	printf("%d\n", a);


	printf("\n");
	system("pause");
	return 0;
}
