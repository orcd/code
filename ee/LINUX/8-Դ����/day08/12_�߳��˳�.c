#include "../header.h"


void * func(void *p)
{
	printf("func\n");

	sleep(1);
	exit(0); //退出整个进程

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	pthread_create(&tid, NULL, func, NULL);

	pthread_detach(tid); //让系统自动回收tid线程的资源，

	while(1);

	return 0;
}


