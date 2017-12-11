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
		sleep(2);
		printf("i am son %u, %u\n", getpid(), getppid());
		//return 250;
		exit(250);
	}
	else if(pid > 0)
	{//父进程
		//1、如果有子进程没有结束，阻塞等待，直到子进程结束
		//2、如果子进程提前结束，这个函数不会阻塞，同时，也是回收子进程资源
		int status;
		//pid_t wpid = wait(&status); //给儿子收尸，阻塞
		//pid_t wpid = waitpid(-1, &status, 0); //和wait完全等价
		//pid_t wpid = waitpid(pid, &status, 0); //指定等价进程号为pid的进程
		//pid_t wpid = waitpid(pid, &status, WNOHANG); //指定等价进程号为pid的进程, 设置不阻塞，不会回收资源
		if( WIFEXITED(status))
		{//如果是正常退出，返回非0
			printf("wpid = %u\n", wpid);
			printf("num = %d\n", WEXITSTATUS(status));
		}
		else if(WIFSIGNALED(status))
		{
			printf("sig = %d\n", WTERMSIG(status));
		}
		printf("i am papa %u, %u\n", getpid(), getppid());

		while(1);
	}


	return 0;
}


