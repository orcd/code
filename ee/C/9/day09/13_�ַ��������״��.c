/* ************************************************************************
 *       Filename:  13_字符串常量易错点.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 16时08分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

//void func(char *p)
void func(char p[100]) //形参中数组是指针变量，和上面等价
{
	strcpy(p, "t");
}

int main()
{
	func("abc");

	return 0;
}

int main01()
{
	char * p = "hello mike";
	char src[] = "abc";
	strcpy(p, src); //字符串常量只读，不能改
	printf("p = %s\n", p);


	return 0;
}



