/* ************************************************************************
 *       Filename:  05_通过指针间接操作内存.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 11时01分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a;
	a = 10;
	*&a = 111; //间接操作内存

	//要保存某个变量的地址，类型比这个变量多一个*
	int * p; //定义一个类型为int *的变量p
	p = &a;
	printf("p = %p, &a = %p\n", p, &a);
	printf("p = %p, a = %d\n", p, a);

	*p = 222;
	printf("a = %d, *p = %d\n", a, *p);


	return 0;
}


