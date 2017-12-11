
#include "../../header.h"

void func(int sig, siginfo_t *info, void *p)
{
	//打印发送者的进程号
	printf("pid = %u\n", info->si_pid);
	//打印对方发送的信息
	printf("val = %d\n", info->si_value.sival_int);
}

int main(int argc, char *argv[])
{
	printf("pid = %u\n", getpid());

	struct sigaction act;
	memset(&act, 0, sizeof(struct sigaction));
	act.sa_flags = SA_SIGINFO; //以默认方式处理
	act.sa_sigaction = func;
	
	sigaction(10, &act, NULL);

	while(1);
	return 0;
}


