
#include "../header.h"

int main(int argc, char *argv[])
{
	//alarm(5);
	struct itimerval timer;
	//第一个触发时间
	timer.it_value.tv_sec = 5; //5s
	timer.it_value.tv_usec = 0;

	//下一次开始，自动触发的周期
	timer.it_interval.tv_sec = 1;
	timer.it_interval.tv_usec = 0;

	//设置定时器
	setitimer(ITIMER_REAL, &timer, NULL);

	while(1)
	{
		printf("hello mike\n");
		sleep(1);
	}

	return 0;
}


