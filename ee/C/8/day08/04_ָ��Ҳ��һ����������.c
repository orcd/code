/* ************************************************************************
 *       Filename:  04_指针也是一种数据类型.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 10时52分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int * p1; //定义一个变量，变量类型是int *
	int ***** p2; //定义一个变量p2, p2类型是int *****
	//指针变量和普通变量没有任何区别
	printf("%lu,%lu, %lu\n", sizeof(p1), sizeof(p2), sizeof(char ***********));

	//32位编译器，指针大小为4字节
	//64位编译器，指针大小为8字节

	return 0;
}


