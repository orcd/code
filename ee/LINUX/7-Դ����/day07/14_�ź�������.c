/* ************************************************************************
 *       Filename:  14_信号阻塞集.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 15时46分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	sigset_t set;
	sigset_t old_set;
	//清空信号集合
	sigemptyset(&set);
	sigaddset(&set, 2); //把2号信号加入集合

	//设置信号阻塞集
	sigprocmask(SIG_BLOCK, &set, &old_set);

	int i = 0;
	for(i = 0; i < 5; ++i)
	{
		printf("2号信号被延缓处理\n");
		sleep(1);
	}
	
	//sigprocmask(SIG_UNBLOCK, &set, NULL); //取消阻塞
	sigprocmask(SIG_SETMASK, &old_set, NULL); //把阻塞集合恢复成原来的的样子

	for(i = 0; i < 5; ++i)
	{
		printf("2号信号可以正常使用\n");
		sleep(1);
	}


	return 0;
}


