#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//指针，指向堆区空间，5个int类型, 指向首元素，首元素是int, 需要int *
	int * p;
	p = realloc(NULL, 5 * sizeof(int)); //第一个参数为NULL说明为第一次分配内存, 等级于malloc

	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		p[i] = i + 1;
		printf("%d\n", p[i]);
	}

	printf("\n");
	//增加5个内存
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
