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
	int a = 10;
	printf("before a = %d\n", a);

	//函数的功能创建子进程
	//原来的进程是父进程，新建的就是子进程
	fork();
	int b = 20;
	printf("after a = %d\n", a);
	printf("after b = %d\n", b);
	

	return 0;
}


