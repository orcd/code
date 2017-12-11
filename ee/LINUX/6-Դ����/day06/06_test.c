#include "../header.h"


int main(int argc, char *argv[])
{
	int ret;
	int fd[2];
	ret = pipe(fd);
	if(ret != 0)
	{
		perror("pipe");
		return -1;
	}
	
	printf("%d, %d\n", fd[0], fd[1]);

	pid_t pid = fork();
	if(pid < 0)
	{
		perror("fork");
		return -2;
	}

	if(0 == pid)
	{//子进程
		//fd[0], fd[1]
		char buf[1024] = {0};
		memset(buf, 'a', sizeof(buf));
		int i = 0;
		while(1)
		{
			write(fd[1], buf, sizeof(buf));
			i++;
			printf("i = %d\n", i);
		}


	}
	else if(pid > 0)
	{//父进程
		//fd[0], fd[1]

	}


	return 0;
}


