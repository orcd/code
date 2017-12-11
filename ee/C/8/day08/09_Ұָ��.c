/* ************************************************************************
 *       Filename:  09_野指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 12时17分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>


int main()
{
	int a;
	int *p = &a;

	p++; //p的值改变了，保存了一个野指针
	*p = 111; //操作野指针所指向的内存，err
	printf("a = %d\n", a);

	return 0;
}

int main01()
{
	int a;
	&a;

	int * p;
	p = &a; //合法指针
	p = (int *)0x112233; //保存了一个野指针
	printf("p = %p\n", p);

	//操作野指针本身没有问题，操作野指针所执行的内存就会有问题
	*p = 111; //err, 导致段错误
	printf("*p = %d\n", *p);


	return 0;
}


