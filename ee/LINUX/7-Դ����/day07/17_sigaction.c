
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
	//signal(2, func); //自定义函数处理
	//signal(3, func); //自定义函数处理
	
	struct sigaction act;
	memset(&act, 0, sizeof(struct sigaction));
	act.sa_flags = 0; //以默认方式处理
	//sigemptyset(&act.sa_mask);
	//sigaddset(&act.sa_mask, 3); //临时阻塞3号信号
	act.sa_handler = func;
	
	sigaction(2, &act, NULL);
	//sigaction(3, &act, NULL);

	while(1);
	return 0;
}


