/* ************************************************************************
 *       Filename:  02_进程号.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 10时14分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	//获取当前进程号
	pid_t pid = getpid();
	printf("pid = %u\n", pid);

	//获取父进程号
	pid_t ppid = getppid();
	printf("ppid = %u\n", ppid);

	//获取进程组号，默认和当前进程号一样
	pid_t pgid = getpgid(pid);
	printf("pgid = %u\n", pgid);


	while(1)
	{
	}


	return 0;
}


