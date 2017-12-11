

#include "../header.h"


int main(int argc, char *argv[])
{
	int fd;
	fd = open("22.txt", O_WRONLY|O_CREAT, 0664);
	if(fd < 0)
	{
		perror("open");
		return -1;
	}
	printf("fd = %d\n", fd);

	char *p1 = "hello abc";
	write(fd, p1, strlen(p1));

	//复制文件描述符，给16.txt配钥匙
	//int new_fd = dup(fd); //fd类似于旧钥匙， new_fd是新钥匙， 返回值也是最小可用的
	int new_fd = fcntl(fd, F_DUPFD, 0); //功能和上面一样
	printf("new_fd = %d\n", new_fd);
	write(new_fd, p1, strlen(p1));

	close(fd);
	close(new_fd);




	return 0;
}


