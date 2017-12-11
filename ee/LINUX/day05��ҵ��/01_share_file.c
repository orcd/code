#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, const char* argv[])
{
    int fd = open("xxx.txt", O_CREAT | O_RDWR, 0664);
    if(fd < 0)
    {
        perror("open err");
        return -1;
    }

    pid_t pid = fork();
    if(pid == -1)
    {
        perror("fork err");
        return -2;
    }

    if(pid == 0)
    {//子进程
        char *p = "are u ok? father!";
        write(fd, p, strlen(p));
		
		close(fd); //子进程关闭文件
    }
    else if(pid > 0)
    {//父进程
        // 睡1s保证子进程已经完成了文件的写操作
        sleep(1);
		
        char buf[1024] = {0};
        lseek(fd, 0, SEEK_SET); //文件光标移动回开头
        read(fd, buf, sizeof(buf));
        printf("%s\n", buf);
		
		close(fd); //父进程关闭文件
    }
	
    return 0;
}
