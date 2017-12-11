/* ************************************************************************
 *       Filename:  20_指针数组.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 17时08分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 30;
	int * p[3] = {&a, &b, &c}; //它是数组，数组每个元素都是指针，指针数组
	p[0] = &a;
	p[1] = &b;
	p[2] = &c;

	printf("%d, %d, %d\n", *p[0], *p[1], *p[2]);
	printf("%d, %d, %d\n", *( *(p+0) ), *( *(p+1) ), *( *(p+2)) );

	return 0;
}

int main01()
{
	int a = 10, b = 20, c = 30;
	int *p1 = &a;
	int *p2 = &b;
	int *p3 = &c;

	printf("%d, %d, %d\n", *p1, *p2, *p3);

	return 0;
}


