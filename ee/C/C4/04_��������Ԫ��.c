#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[10];
	//首元素类型，是int, 需要int *指向首元素
	int *p1 = a;

	//整个数组是int [10]
	int(*p2)[10] = &a;

	int b[3][4];
	//首元素类型int [4]
	int(*p3)[4] = b;
	//整个数组类型int [3][4]
	int(*p4)[3][4] = &b;

	int c[3][4][5];
	//首元素int [4][5]
	int(*p5)[4][5] = c;
	//整个数组int [3][4][5]
	int(*p6)[3][4][5] = &c;


	printf("\n");
	system("pause");
	return 0;
}
