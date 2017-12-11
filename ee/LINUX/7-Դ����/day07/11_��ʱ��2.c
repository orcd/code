
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

	struct itimerval timer;
	//第一个触发时间
	timer.it_value.tv_sec = 5; //5s
	timer.it_value.tv_usec = 0;

	//下一次开始，自动触发的周期
	timer.it_interval.tv_sec = 1;
	timer.it_interval.tv_usec = 0;

	//设置定时器
	setitimer(ITIMER_REAL, &timer, NULL);

	while(1);

	return 0;
}


