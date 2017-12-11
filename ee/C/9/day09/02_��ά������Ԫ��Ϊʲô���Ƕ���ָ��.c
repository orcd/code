/* ************************************************************************
 *       Filename:  02_二维数组首元素为什么不是二级指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 10时17分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a[3][4]; //它是数组类型，不是普通类型
	printf("%p, %p\n", a, *a);

	int ** p = (int **)a;
	printf("%p, %p\n", p, *p);

	//数组指针，指向数组的指针
	int (*p2)[4] = a;
	printf("%p, %p\n", p2, *p2);

	int b[3][4][5];
	int (*p3)[4][5] = b;
	printf("%p, %p\n", p3, *p3);

	return 0;
}


