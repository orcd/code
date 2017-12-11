#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//功能：增加或减少原来堆区的空间
//参数：
//            p为空，实现功能和malloc一样, p不为空，在p指向堆区空间基础上，增加或减少内存
//            old为原来堆区空间大小
//           size, 新内存大小，不是增加或减少内存的大小
int * my_realloc(int *p, int old, int size)
{
	if (p == NULL)
	{
		p = (int *)malloc(size);
		return p;
	}

	int * tmp = (int *)malloc(size); //10个int的空间
	if (old < size) //增加内存
	{
		memcpy(tmp, p, old);
	}
	else //减少内存
	{
		memcpy(tmp, p, size);
	}


	free(p);

	return tmp;
}

int main01(void)
{
	//指针，指向堆区空间，5个int类型, 指向首元素，首元素是int, 需要int *
	int * p;
	//p = my_realloc(NULL, 0, 5 * sizeof(int)); //第一个参数为NULL说明为第一次分配内存
	p = (int *)malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//减少3个内存
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
	//指针，指向堆区空间，5个int类型, 指向首元素，首元素是int, 需要int *
	int * p;
	//p = my_realloc(NULL, 0, 5 * sizeof(int)); //第一个参数为NULL说明为第一次分配内存
	p = (int *)malloc(5 * sizeof(int));

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//增加5个内存
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
