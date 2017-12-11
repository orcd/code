/* ************************************************************************
 *       Filename:  02_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年10月08日 11时38分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void func()
{
	int a = 10;
#define A 10
#define B A
//#undef A
}

int main()
{
	printf("%d\n", B);
	return 0;
}


