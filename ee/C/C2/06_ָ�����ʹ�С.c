#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//32λ��������ָ���СΪ32λ��4�ֽ�
	//64λ��������ָ���СΪ64λ��8�ֽ�
	printf("%d, %d, %d\n", sizeof(char **********), sizeof(char *), sizeof(double *));


	printf("\n");
	system("pause");
	return 0;
}
