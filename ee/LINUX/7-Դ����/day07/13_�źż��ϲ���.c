/* ************************************************************************
 *       Filename:  13_信号集合操作.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 15时38分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	sigset_t set;
	
	//清空信号集合
	sigemptyset(&set);

	sigaddset(&set, 2); //把2号信号加入集合
	sigdelset(&set, 2); //把2号信号移除集合

	if( sigismember(&set, 2) == 0 )
	{//判断2号信号是否在set集合中
		printf("2号信号不在集合中\n");
	}
	else
	{
		printf("2号信号在集合中\n");
	}



	return 0;
}


