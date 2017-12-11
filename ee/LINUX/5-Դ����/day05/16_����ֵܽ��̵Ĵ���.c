/* ************************************************************************
 *       Filename:  15_多进程的创建.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 15时07分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int i = 0;
	int number = 3;
	for(i = 0; i < number; ++i)
	{
		pid_t pid = fork();
		if(pid == 0)
		{
			break;
		}
	}

	if(0 == i)
	{
		printf("i = %d, getpid() = %u, getppid() = %u\n", i, getpid(), getppid());
	}
	else if(1 == i)
	{
		printf("i = %d, getpid() = %u, getppid() = %u\n", i, getpid(), getppid());
	}
	else if(2 == i)
	{
		printf("i = %d, getpid() = %u, getppid() = %u\n", i, getpid(), getppid());
	}
	else if(3 == i)
	{
		sleep(3);
		printf("i = %d, getpid() = %u, getppid() = %u\n", i, getpid(), getppid());
	}



	return 0;
}


