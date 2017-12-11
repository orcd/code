/* ************************************************************************
 *       Filename:  06_返回局部变量的地址.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 11时46分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

char * func()
{
	char str[] = "abc"; //首元素是char, 首元素地址是char *

	return &str[0];
}

int main()
{
	char * p;
	p = func();
	printf("p = %s\n", p);

	return 0;
}


