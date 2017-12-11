/* ************************************************************************
 *       Filename:  03_创建子进程.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 10时26分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	//函数的功能创建子进程
	//原来的进程是父进程，新建的就是子进程
	printf("before pid = %u, ppid = %u\n", getpid(), getppid()); //获取当前进程号
	fork();
	int a = 10;
	printf("after pid = %u, ppid = %u\n", getpid(), getppid()); //获取当前进程号
	printf("a = %d\n", a);

	while(1);
	

	return 0;
}


