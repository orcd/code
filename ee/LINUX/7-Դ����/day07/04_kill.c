/* ************************************************************************
 *       Filename:  04_kill.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 10时43分02秒
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

	if(pid > 0)
	{//父进程

		printf("i am father\n");
		while(1);
	}
	else if(pid == 0)
	{
		printf("i am son\n");
		sleep(2);
		kill(getppid(), SIGINT);
	}

	return 0;
}



