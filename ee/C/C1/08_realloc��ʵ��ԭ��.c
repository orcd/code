#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//指针，指向堆区空间，5个int类型, 指向首元素，首元素是int, 需要int *
	int * p;
	int n = 5;
	p = (int *)malloc(n * sizeof(int)); //内存的值为随机数

	int i = 0;
	for (i = 0; i < n; ++i)
	{
		p[i] = i + 1;
	}

	//前面的代码，不能变， 给我增加5个int的空间
	int * tmp = (int *)malloc(10 * sizeof(int)); //10个int的空间
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

	//一夫一妻
	free(p); //不是释放p的内存，是释放p所指向的内存

	printf("\n");
	system("pause");
	return 0;
}
