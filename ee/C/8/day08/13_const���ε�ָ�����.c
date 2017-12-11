/* ************************************************************************
 *       Filename:  13_const修饰的指针变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 15时12分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int a = 10;
	int * p1 = &a;
	*p1 = 111; //ok, 操作指针所指向的内存，就是a
	p1 = NULL; //ok, 操作指针变量本身

	//从左往右看，看const先修饰的字符(*, 指针变量)
	//如果先修饰*， *p不能改，指针所指向内存不能改
	//如果先修饰变量，p不能改
	const int * p2 = &a;
	//int const * p2 = &a;
	//*p2 = 111; //err
	p2 = NULL;

	int * const p3 = &a;
	*p3 = 111; //ok
	//p3 = NULL; //err

	const int * const p4 = &a;

	return 0;
}


