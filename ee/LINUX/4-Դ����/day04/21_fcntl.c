
#include "../header.h"


int main(int argc, char *argv[])
{
	int fd;
	fd = open("21.txt", O_WRONLY|O_CREAT, 0664);
	//fd = open("21.txt", O_RDONLY);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}

	//获取原来文件描述符的属性
	int flag = fcntl(fd, F_GETFL, 0); //指打开的属性
	switch(flag & O_ACCMODE)
	{
		case O_RDONLY:
			printf("read only\n");
			break;
			
		case O_WRONLY:
			printf("write only\n");
			break;
		case O_RDWR:
			printf("read and wrie\n");
			break;
		default:
			break;
	}

	if(flag & O_APPEND)
	{
		printf("有追加属性\n");
	}
	else
	{
		//增加追加属性
		flag |= O_APPEND;
		fcntl(fd, F_SETFL, flag);
	}


	char *p = "hello";
	write(fd, p, strlen(p));




	close(fd);

	return 0;
}


			

