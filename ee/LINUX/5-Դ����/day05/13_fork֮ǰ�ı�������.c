

#include "../header.h"

int a = 10;
int main(int argc, char *argv[])
{
	int b = 20;

	pid_t pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork");
		return -1;
	}

	if(pid > 0)
	{//父进程
		a = 20;
		b = 30;
		printf("father, a = %d, b = %d\n", a, b);

	}
	else if(pid == 0)
	{//子进程
		printf("son, a = %d, b = %d\n", a, b);
	}


	return 0;
}


