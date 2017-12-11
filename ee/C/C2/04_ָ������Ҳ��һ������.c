#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1、指针类型也是一种类型，和int类型本质是一样
//2、指针变量也是一种变量，是变量就能保存数
//3、p和*p的区别: p指p的内存，*p不是p的内存，p所指向的内存
int main(void)
{
	int  p1;
	p1 = 111;
	int * p2 = &p1;
	*p2 = 222;
	printf("%d, %d, %d\n", p1, *p2, p2);

	printf("\n");
	system("pause");
	return 0;
}

int main03(void)
{
	int ************ p1;
	p1 = 111;
	int ************ * p2 = &p1;
	*p2 = 222;
	printf("%d, %d, %d\n", p1, *p2, p2);

	printf("\n");
	system("pause");
	return 0;
}


int main02()
{
	int p;
	p = 10;
	printf("p = %d\n", p); //就是10
	printf("*p = %d\n", *(int *)p);//err, 操作野指针所指向的内存

	return 0;
}

int main01(void)
{
	//1、指针类型也是一种类型，和int类型本质是一样
	//2、指针变量也是一种变量，是变量就能保存数
	//3、p和*p的区别: p指p的内存，*p不是p的内存，p所指向的内存
	int ************** p;
	p = (int **************)10;
	printf("p = %d\n", p); //就是10
	printf("*p = %d\n", *p); //err, 操作野指针所指向的内存


	printf("\n");
	system("pause");
	return 0;
}
