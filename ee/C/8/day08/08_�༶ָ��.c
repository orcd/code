/* ************************************************************************
 *       Filename:  08_多级指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 12时00分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	int * p1 = &a;
	int ** p2 = &p1;
	int *** p3 = &p2;
	int **** p4 = &p3;

	p1;
	*p1;
	p2;
	**p2;
	p4;
	*p4;
	**p4;
	****p4 = 111;
	printf("a = %d\n", a);


	return 0;
}


