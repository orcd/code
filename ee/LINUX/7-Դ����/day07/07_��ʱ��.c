/* ************************************************************************
 *       Filename:  07_定时器.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 11时24分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void func(int sig) //信号处理函数
{
	//printf("sig = %d\n", sig);
	static int i = 0;
	++i;
	printf("\ri = %d", i);
	fflush(stdout);
}

int main(int argc, char *argv[])
{
	//注册函数
	//告诉内核，产生14号信号，自动调用func
	signal(14, func); //只要产生14号信号，自动调用func函数

	while(1)
	{
		alarm(1);
		sleep(1);
	}

	return 0;
}


