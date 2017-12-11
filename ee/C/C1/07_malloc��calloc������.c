#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//指针，指向堆区空间，5个int类型
	//指向首元素，首元素是int, 需要int *
	int * p;
	int n = 5;
	p = (int *)malloc(n * sizeof(int)); //内存的值为随机数
	//memset(p, 0, sizeof(int)*n);

	p = (int *)calloc(n, sizeof(int)); //内存的值为0
	//p = (int *)calloc(sizeof(int), n);

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		printf("%d\n", p[i]);
	}

	//一夫一妻
	free(p); //不是释放p的内存，是释放p所指向的内存

	printf("\n");
	system("pause");
	return 0;
}
