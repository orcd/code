/* ************************************************************************
 *       Filename:  12_siganl.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 15时07分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void func(int sig)
{
	if(sig == 2)
	{
		printf("i am sigint\n");
	}
	else if(sig == 3)
	{
		printf("i am sigquit\n");
	}
}

int main(int argc, char *argv[])
{
	printf("pid = %u\n", getpid());
	//signal(2, SIG_DFL); //以默认方式处理
	//signal(2, SIG_IGN); //忽略此信号
	signal(2, func); //自定义函数处理
	signal(3, func); //自定义函数处理

	while(1);
	return 0;
}


