/* ************************************************************************
 *       Filename:  11_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 14时46分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char * p;
	//p = (char *)malloc(100 * sizeof(char));
	p = (char *)malloc(100);
	strcpy(p, "hello"); //不是给p拷贝内容，给p所指向的内存拷贝内容


	free(p);

	return 0;
}


