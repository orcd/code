#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//ָ�룬ָ������ռ䣬5��int����, ָ����Ԫ�أ���Ԫ����int, ��Ҫint *
	int * p;
	int n = 5;
	p = (int *)malloc(n * sizeof(int)); //�ڴ��ֵΪ�����

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		p[i] = i + 1;
	}

	//ǰ��Ĵ��룬���ܱ䣬 ��������5��int�Ŀռ�
	int * tmp = (int *)malloc(10 * sizeof(int)); //10��int�Ŀռ�
	memcpy(tmp, p, n * sizeof(int));

	free(p);
	p = tmp;

	for (i = 0; i < n; ++i)
	{
		printf("%d\n", p[i]);
	}

	for (i = 5; i < 10; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	//һ��һ��
	free(p); //�����ͷ�p���ڴ棬���ͷ�p��ָ����ڴ�

	printf("\n");
	system("pause");
	return 0;
}
