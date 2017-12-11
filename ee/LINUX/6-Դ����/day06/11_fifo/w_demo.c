/* ************************************************************************
 *       Filename:  w_demo.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月22日 15时14分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"

int main(int argc, char *argv[])
{
	if( access("xxx", F_OK) != 0) //此文件不存在
	{
		int ret = mkfifo("xxx", 0666);
		if(ret != 0)
		{
			perror("mkfifo");
			return -1;
		}
	}

	//1、打开文件
	int fd = open("xxx", O_RDWR); //可读可写打开，open就不会阻塞
	if(fd < 0)
	{
		perror("open");
		return -2;
	}

	printf("after write\n");
	
//	sleep(3);

	while(1)
	{
		sleep(1);
		char *p = "are u ok?";
		write(fd, p, strlen(p));
	}


	close(fd);

	return 0;
}


