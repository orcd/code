#include "../header.h"

void func(int sig)
{
	printf("sig = %d\n", sig);
}

void test()
{
	int i = 0;
	sigset_t tmp_set;
	sigemptyset(&tmp_set);
	//获取没有处理的信号集
	sigpending(&tmp_set);
	for(i = 1; i < 32; ++i)
	{
		if( sigismember(&tmp_set, i) == 0)
		{//不是集合的成员
			printf("0");
		}
		else
		{//是集合的成员
			printf("1");
		}
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	signal(2, func);

	sigset_t set;
	sigset_t old_set;
	//清空信号集合
	sigemptyset(&set);
	sigaddset(&set, 2); //把2号信号加入集合

	test();
	//设置信号阻塞集
	sigprocmask(SIG_BLOCK, &set, &old_set);

	int i = 0;
	for(i = 0; i < 5; ++i)
	{
		test();
		printf("2号信号被延缓处理\n");
		sleep(1);
	}
	
	//#include "../header.h"

void func(int sig)
{
	printf("sig = %d\n", sig);
}

int main(int argc, char *argv[])
{
	signal(2, func);

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
} //取消阻塞
	sigprocmask(SIG_SETMASK, &old_set, NULL); //把阻塞集合恢复成原来的的样子

	for(i = 0; i < 5; ++i)
	{
		printf("2号信号可以正常使用\n");
		sleep(1);
	}


	return 0;
}


