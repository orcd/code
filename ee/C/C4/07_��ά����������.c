#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//只要第一个[]的数字可以不写，其它必需写
//void func01(int a[3][4]) //形参中的数组是指针变量
//void func01(int a[][4])
void func01(int (*a)[4])
{

}

//实参为首元素地址，首元素为int [4][5]
void func02(int(*p)[4][5])
{

}

int main(void)
{
	int a[3][4];
	func01(a);

	int b[3][4][5];
	func02(b);


	printf("\n");
	system("pause");
	return 0;
}
