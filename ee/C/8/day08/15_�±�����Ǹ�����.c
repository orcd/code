/* ************************************************************************
 *       Filename:  15_下标可以是负数吗.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 15时46分38秒
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
	p[0] = 10;
	printf("a = %d\n", a);

	//下标能是负数吗？
	p++;
	p[-1] = 22;
	printf("%d, %d\n", p[-1], a);
	*p = 111; //err
	printf("%d\n", *p);
	

	return 0;
}


