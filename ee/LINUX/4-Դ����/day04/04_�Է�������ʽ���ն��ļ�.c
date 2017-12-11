/* ************************************************************************
 *       Filename:  04_以非阻塞方式打开终端文件.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 09时44分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	int fd;
	//以只读，非阻塞方式打开终端
	fd = open("/dev/tty", O_RDONLY|O_NONBLOCK);
	if(fd < 0)
	{
		perror("open");
		return 0;
	}
/* 	char buf[1024] = {0};
 * 	int ret = read(fd, buf, sizeof(buf));
 * 	printf("ret = %d\n", ret);
 * 	printf("errno = %d\n", errno);
 */
	char buf[1024] = {0};
	while(1)
	{
		int ret = read(fd, buf, sizeof(buf));
		sleep(1);
		if(ret < 0 && errno == EAGAIN) //非阻塞，没有数据
		{
			printf("没有数据输入\n"); //有换行
		}
		else if(ret < 0 && errno != EAGAIN) //出错
		{
			perror("read\n");
		}
		else if(ret > 0)
		{//有数据
			printf("buf = %s\n", buf);
			break;
		}

	}


	return 0;
}


