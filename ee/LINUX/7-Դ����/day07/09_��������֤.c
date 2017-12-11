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
	sleep(5);
	printf("wake up\n");
}

int main(int argc, char *argv[])
{
	signal(14, func);

	alarm(3);
	while(1)
	{
		++i;
		printf("i = %lld\n", i);
		sleep(1);
	}

	return 0;
}


