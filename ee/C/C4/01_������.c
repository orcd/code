#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	int a[10];

	//1、数组名是常量
	//a = 10;
	//2、数组名是地址，是首元素地址, n维数组的首元素为n-1维
	printf("%p, %p\n", a, &a[0]);

	//有2种情况，不会当做首元素地址操作
	//a) sizeof(a), 这里的a，当做是数组类型int [10]
	printf("%d, %d\n", sizeof(a), sizeof(int[10]));
	printf("%d\n", sizeof(a+0)); //a+0是首元素地址

	//b) &a, 不是首元素地址，代表整个数组的地址
	printf("%d, %d\n", &a, &a+1);


	printf("\n");
	system("pause");
	return 0;
}
