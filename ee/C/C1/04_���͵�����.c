#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1、告诉编译器，此类型的数据需要分配多大的空间
	//2、任何一个变量，数据，都属于某种类型
	//3、类型不一样，导致步长不一样，步长就是+1后变化的大小
	
	int a[10];
	//a, 和 &a数据类型不一样
	//a, 首元素地址，首元素是int, 首元素地址是int *, int * 指向int, +1, +sizeof(int)
	//&a, 整个数组的地址，整个数组是int [10], +1, +sizeof(int [10])
	printf("a = %d, &a = %d\n", a, &a);
	printf("a+1 = %d, &a+1 = %d\n", a+1, &a+1);

	int b;
	//char *指向char, +1, +sizeof(char)
	//int *指向int, +1, +sizeof(int)
	//步长由数据类型决定，不是由赋值内容决定
	printf("%d, %d\n", (char *)&b, (int *)&b);
	printf("%d, %d\n", (char *)&b+1, (int *)&b+1);


	printf("\n");
	system("pause");
	return 0;
}
