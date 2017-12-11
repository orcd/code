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

char * func()
{
	char * p;
	p = (char *)malloc(strlen("hello abc") + 1);

	return p;
}

int main()
{
	char * p = NULL;
	p = func();
	strcpy(p, "hello abc");
	printf("p = %s\n", p);

	free(p); //释放的是p所指向的内存，不是p本身的内存
	p = NULL;

	return 0;
}


