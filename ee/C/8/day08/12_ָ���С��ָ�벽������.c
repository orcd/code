/* ************************************************************************
 *       Filename:  12_指针大小和指针步长区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 14时59分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//指针大小是固定的，和编译器有关
	printf("%lu, %lu, %lu\n", sizeof(char **), sizeof(int *), sizeof(double *******));

	//指针的+1，不一定+1
	//指针的步长，+1后，变化的长度，不固定
	//由数据类型决定，不是由赋值的内容决定
	int * p = NULL; //int *指向int, +1, +sizeof(int) = +4
	printf("p: %p, p+1: %p\n", p, p+1);

	int ** p2 = NULL; //int ** 指向int *, +sizeof(int *) = +8
	printf("p2: %p, p2+1: %p\n", p2, p2+1);

	char *p3 = NULL; //char *指向char, +sizeof(char) = +1

	return 0;
}


