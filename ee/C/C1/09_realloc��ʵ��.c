#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//���ܣ����ӻ����ԭ�������Ŀռ�
//������
//            pΪ�գ�ʵ�ֹ��ܺ�mallocһ��, p��Ϊ�գ���pָ������ռ�����ϣ����ӻ�����ڴ�
//            oldΪԭ�������ռ��С
//           size, ���ڴ��С���������ӻ�����ڴ�Ĵ�С
int * my_realloc(int *p, int old, int size)
{
	if (p == NULL)
	{
		p = (int *)malloc(size);
		return p;
	}

	int * tmp = (int *)malloc(size); //10��int�Ŀռ�
	if (old < size) //�����ڴ�
	{
		memcpy(tmp, p, old);
	}
	else //�����ڴ�
	{
		memcpy(tmp, p, size);
	}


	free(p);

	return tmp;
}

int main01(void)
{
	//ָ�룬ָ������ռ䣬5��int����, ָ����Ԫ�أ���Ԫ����int, ��Ҫint *
	int * p;
	//p = my_realloc(NULL, 0, 5 * sizeof(int)); //��һ������ΪNULL˵��Ϊ��һ�η����ڴ�
	p = (int *)malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//����3���ڴ�
	p = my_realloc(p, 5 * sizeof(int), 2 * sizeof(int));
	for (i = 0; i < 2; ++i)
	{
		printf("%d\n", p[i]);
	}
	printf("\n");

	free(p);


	printf("\n");
	system("pause");
	return 0;
}

int main(void)
{
	//ָ�룬ָ������ռ䣬5��int����, ָ����Ԫ�أ���Ԫ����int, ��Ҫint *
	int * p;
	//p = my_realloc(NULL, 0, 5 * sizeof(int)); //��һ������ΪNULL˵��Ϊ��һ�η����ڴ�
	p = (int *)malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//����5���ڴ�
	p = my_realloc(p, 5 * sizeof(int), 10* sizeof(int));
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
