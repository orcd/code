/* ************************************************************************
 *       Filename:  01_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月20日 09时37分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *p)
{
	strcpy(p, "hello abc");
}

int main()
{
	char * p = NULL;
	p = (char *)malloc(strlen("hello abc") + 1);

	func(p); //变量本身传递，值传递，形参不能改变实现
	printf("p = %s\n", p);

	return 0;
}


