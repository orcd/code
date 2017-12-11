/* ************************************************************************
 *       Filename:  01_普通文件非阻塞.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 09时20分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int fd = open("1.txt", O_RDONLY);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}

	char buf[1024] = {0};
	int ret = read(fd, buf, sizeof(buf));
	printf("ret = %d\n", ret);
	

	close(fd);

	return 0;
}


