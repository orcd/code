#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//ָ�룬ָ������ռ䣬5��int����, ָ����Ԫ�أ���Ԫ����int, ��Ҫint *
	int * p;
	p = realloc(NULL, 5 * sizeof(int)); //��һ������ΪNULL˵��Ϊ��һ�η����ڴ�, �ȼ���malloc

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//����5���ڴ�
	printf("before p = %p\n", p);
	p = realloc(p,  1000 * sizeof(int));
	printf("after p = %p\n", p);
	for (i = 0; i < 5; ++i)
	{
		printf("%d\n", p[i]);
	}
	printf("\n");

	for (i = 5; i < 10; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}
	printf("\n");

	free(p);


	printf("\n");
	system("pause");
	return 0;
}
