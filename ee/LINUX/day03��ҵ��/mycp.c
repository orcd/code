#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int fd1, fd2;
	if(argc != 3)
	{
		printf("use err: mycp src_file dst_file\n");
		return -1;
	}
	
	if(0 == strcmp(argv[1], argv[2]))
	{
		printf("源文件和目的文件不允许同名!");
		return -2;
	}

	fd1 = open(argv[1], O_RDONLY); //只读方式打开源文件
	if(-1 == fd1)
	{
		perror("open src err");
		return -3;
	}

	fd2 = open(argv[2], O_WRONLY|O_CREAT, 0666); //只写方式打开目的文件
	if(-1 == fd2)
	{
		close(fd1); //关闭文件1
		perror("open dst err");
		return -3;
	}

	char buf[1024*4];
	int len;
	while(1)
	{
		len = read(fd1, buf, sizeof(buf)); //从源文件读取内容，返回值为读取大小
		if(len <= 0)
		{
			break; //跳出循环
		}
		
		//把读取的内容，写入另外一个文件，读多少写多少
		write(fd2, buf, len);
	}

	close(fd1); //关闭文件
	close(fd2);

	return 0;
}

