/* ************************************************************************
 *       Filename:  03_pipe.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月22日 11时11分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

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
		close(fd[0]);
		char *p = "are u ok?";
		write(fd[1], p, strlen(p));
		
		sleep(1);
		p = "i am bad";
		write(fd[1], p, strlen(p));

		close(fd[1]);

	}
	else if(pid > 0)
	{//父进程
		//fd[0], fd[1]
		close(fd[1]);
		char buf[1024] = {0};
		read(fd[0], buf, sizeof(buf));
		printf("buf = %s\n", buf);
		memset(buf, 0, sizeof(buf));
		read(fd[0], buf, sizeof(buf));
		printf("buf1 = %s\n", buf);
		close(fd[0]);

	}


	return 0;
}


