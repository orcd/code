/* ************************************************************************
 *       Filename:  03_通过指针间接赋值.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 10时41分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void func(int * p)
{
	*p = 111;
}

int main()
{
	int a;
	func(&a); //地址传递
	printf("a = %d\n", a);


	return 0;
}


int func02()
{
	return 250;
}

int main02()
{
	int a;
	a = func02();

	int b, c, d;


	return 0;
}

void func01(int a)
{
	a = 111;
	printf("func a = %d\n", a);
}

int main03()
{
	int a;
	//通过一个函数改变a的值
	//本质上，函数传参都是值传递，站在变量角度， 如果只是变量本身传递，值传递，不管变量是任何类型
	//站在变量角度， 如果是 &变量名，地址传递，不管变量是任何类型
	func01(a);
	printf("a = %d\n", a);

	return 0;
}

int main01()
{
	int a;
	int * p = &a;
	*p = 111;
	printf("a = %d\n", a);

	return 0;
}



