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
		printf("\naaaaaaaaaaaa\n");
		sleep(1);
		printf("\nbbbbbbbbbbb\n");
		sleep(1);
		printf("\nccccccccccccc\n");
		sleep(1);
		printf("\nddddddddddddd\n");

	}

	return 0;
}


