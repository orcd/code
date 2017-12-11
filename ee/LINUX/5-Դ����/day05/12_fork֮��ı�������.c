
#include "../header.h"

int main(int argc, char *argv[])
{
	pid_t pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork");
		return -1;
	}
	int a = 10;

	if(pid > 0)
	{//父进程
		int b = 20;
		printf("father, a = %d, b = %d\n", a, b);

	}
	else if(pid == 0)
	{//子进程
		printf("son, a = %d\n", a);
	}


	return 0;
}


