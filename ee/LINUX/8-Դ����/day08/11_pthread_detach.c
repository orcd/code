#include "../header.h"

int num = 0;

void * func(void *p)
{
	num = 111;
	printf("func num = %d\n", num);
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	pthread_create(&tid, NULL, func, NULL);

	pthread_detach(tid); //让系统自动回收tid线程的资源，

	sleep(1);
	printf("main num = %d\n", num);


	return 0;
}


