/* ************************************************************************
 *       Filename:  test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年10月07日 11时59分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void func02(int a)
{
	printf("a = %d\n", a);
	exit(0);
}

int main()
{
	signal(2, func02);

	while(1);
	return 0;
}


