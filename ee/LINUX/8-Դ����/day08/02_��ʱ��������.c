
#include "../header.h"

void func(int sig)
{
	if(sig == 2)
	{
		printf("i am sigint\n");
	}
	sleep(10);
	printf("wake up\n");
}

int main(int argc, char *argv[])
{
	printf("pid = %u\n", getpid());
	
	struct sigaction act;
	memset(&act, 0, sizeof(struct sigaction));
	act.sa_flags = 0; 
	sigaddset(&act.sa_mask, 3); //只有回调函数运行期间才有效
	act.sa_handler = func;
	
	sigaction(2, &act, NULL);

	while(1);
	return 0;
}

void test(int sig, siginfo_t * info, void *p)
{

}

int main01(int argc, char *argv[])
{
	printf("pid = %u\n", getpid());
	
	struct sigaction act;
	memset(&act, 0, sizeof(struct sigaction));
	act.sa_flags = SA_SIGINFO; 
	act.sa_sigaction = test;
	
	sigaction(2, &act, NULL);

	while(1);
	return 0;
}


