#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//ָ�룬ָ������ռ䣬5��int����
	//ָ����Ԫ�أ���Ԫ����int, ��Ҫint *
	int * p;
	int n = 5;
	p = (int *)malloc(n * sizeof(int)); //�ڴ��ֵΪ�����
	//memset(p, 0, sizeof(int)*n);

	p = (int *)calloc(n, sizeof(int)); //�ڴ��ֵΪ0
	//p = (int *)calloc(sizeof(int), n);

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", p[i]);
	}

	//һ��һ��
	free(p); //�����ͷ�p���ڴ棬���ͷ�p��ָ����ڴ�

	printf("\n");
	system("pause");
	return 0;
}
