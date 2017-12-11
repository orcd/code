/* ************************************************************************
 *       Filename:  06_文件读写.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 17时08分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

void write_file()
{
	int fd;
	fd = open("6.txt", O_WRONLY|O_CREAT, 0666);
	if(fd < 0)
	{
		perror("open");
		return;
	}

	char buf[] = "abc";
	int ret = write(fd, buf, strlen(buf));
	printf("ret = %d\n", ret);

	close(fd);
}

void read_file()
{
	int fd;
	fd = open("6.txt", O_RDONLY);
	if(fd < 0)
	{
		perror("open");
		return;
	}

	char buf[5] = {0};
	int ret = read(fd, buf, sizeof(buf));
	printf("ret = %d\n", ret);
	printf("buf = %s\n", buf);

	memset(buf, 0, sizeof(buf));
	ret = read(fd, buf, sizeof(buf));
	printf("ret = %d\n", ret);
	printf("buf = %s\n", buf);


	close(fd);
}

int main(int argc, char *argv[])
{
	//write_file();
	read_file();
	return 0;
}


