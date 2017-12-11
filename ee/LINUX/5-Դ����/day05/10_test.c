/* ************************************************************************
 *       Filename:  06_区分父子进程.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 11时26分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	pid_t pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork");
		return -1;
	}

	if(pid == 0)
	{//子进程

		printf("i am son %u, %u\n", getpid(), getppid());
	}
	else if(pid > 0)
	{//父进程
		printf("i am papa %u, %u\n", getpid(), getppid());
		return 0;	
	}

	printf("getpid() = %u\n", getpid());

	return 0;
}


