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
		while(1)
		{
			sleep(1);
			char *p = "are u ok?";
			write(fd[1], p, strlen(p));
		}
	}
	else if(pid > 0)
	{//父进程
		//fd[0], fd[1]
		//获取属性
		int flag = fcntl(fd[0], F_GETFL, 0);
		flag |= O_NONBLOCK;
		fcntl(fd[0], F_SETFL, flag); //设置属性
		while(1)
		{
			char buf[1024] = {0};
			int ret = read(fd[0], buf, sizeof(buf));
			printf("buf = %s\n", buf);
			if(ret > 0)
			{
				break;
			}
		}
	}

	close(fd[0]);
	close(fd[1]);


	return 0;
}


