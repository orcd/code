/* ************************************************************************
 *       Filename:  01_回调处理.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 11时24分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"

void deal_mem(int sig)
{
	pid_t pid;
	if( (pid = wait(NULL)) != -1 )
	{
		printf("儿子[%u]不幸身亡\n", pid);
	}
}

int main(int argc, char *argv[])
{
	signal(SIGCHLD, deal_mem);

	if(0 == fork())
	{//子进程
		printf("i am son = %u\n", getpid());
		printf("i am go to die\n");
	}
	else
	{
		printf("i am father\n");
		while(1);
	}

	return 0;
}




