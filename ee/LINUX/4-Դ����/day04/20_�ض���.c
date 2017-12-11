#include "../header.h"

int main(int argc, char *argv[])
{
	int fd;
	fd = open("20.txt", O_WRONLY|O_CREAT, 0666); //
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd); //打印到屏幕 

#if 0
	//重定向
	close(1); //把1关闭
	dup(fd); //返回值和fd都是指向20.txt
#endif
	dup2(fd, 1);
	printf("已经重定向了\n");

	return 0;
}


