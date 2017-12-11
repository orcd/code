/* ************************************************************************
 *       Filename:  16_dup.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 15时09分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	int fd;
	fd = open("16.txt", O_WRONLY|O_CREAT, 0664);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd);

	char *p1 = "hello abc";
	write(fd, p1, strlen(p1));

	//复制文件描述符，给16.txt配钥匙
	int new_fd = dup(fd); //fd类似于旧钥匙， new_fd是新钥匙， 返回值也是最小可用的
	printf("new_fd = %d\n", new_fd);
	write(new_fd, p1, strlen(p1));

	close(fd);
	close(new_fd);




	return 0;
}


