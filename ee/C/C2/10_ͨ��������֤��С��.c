#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a = 0x11223344; //ͨ�����ԣ�����->�ڴ棬 ��������λ�ŵ͵�ַ��С�˴��
	printf("&a = %p\n", &a);

	printf("\n");
	system("pause");
	return 0;
}
