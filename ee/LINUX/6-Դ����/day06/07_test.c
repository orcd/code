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

	if(pid > 0)
	{//父进程
		
		sleep(1);
		close(fd[0]);
		write(fd[1], "a", 1);
		printf("hello mike\n");
		
		while(1);


	}
	else if(pid  == 0)
	{//子进程
		//fd[0], fd[1]
		close(fd[0]);
		while(1);
	}


	return 0;
}


