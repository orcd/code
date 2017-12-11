/* ************************************************************************
 *       Filename:  08_统计1s累加多少次.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 11时43分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

long long i = 0;

void func(int a)
{
	printf("i = %lld\n", i);
	exit(0);
}

int main(int argc, char *argv[])
{
	signal(14, func);

	alarm(1);
	while(1)
	{
		++i;
	}

	return 0;
}


