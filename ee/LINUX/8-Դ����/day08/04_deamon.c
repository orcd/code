/* ************************************************************************
 *       Filename:  04_deamon.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月25日 10时29分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void write_time_log(int sig)
{
	int fd;
	fd = open("timelog.txt", O_WRONLY|O_CREAT|O_APPEND, 0666);
	//log()
	
	//获取系统时间
	time_t t = time(NULL);
	char *str = ctime(&t);
	write(fd, str, strlen(str));

	close(fd);

}

int main(int argc, char *argv[])
{
	//1、脱离终端(必须), 孤儿进程就是脱离终端的进程
	
	pid_t pid;
	pid = fork();
	if(pid < 0)
	{
		perror("fork");
		return -1;
	}

	if(0 == pid)
	{
		setsid(); //成为会话进程, 脱离原来的组和会话

		//2、改变目录(不是必须)
		chdir("/");

		//3、改变掩码(不是必须)
		umask(0022);

		//4、关闭0， 1， 2(不是必须)
		close(0);
		close(1);
		close(2);

		//5、忽略一下信号（不是必须）
		signal(2, SIG_IGN);
		signal(3, SIG_IGN);

		//工作
		signal(14, write_time_log);

		write_time_log(14);
		while(1)
		{
			alarm(5);
			sleep(5);
		}


		//while(1);//不让子进程进程，它是孤儿进程
	}
	else if(pid > 0)
	{
		exit(0); //父亲退出
	}


	return 0;
}



