#include "../header.h"


void * func(void *p)
{
	while(1)
	{
		//sleep(1);
		//人为设置取消点
		//pthread_testcancel();
		printf("aaaaaaaaa\n");
	}
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	pthread_create(&tid, NULL, func, NULL);

	sleep(3);
	pthread_cancel(tid); //取消tid线程的运行

	pthread_join(tid, NULL); //等待子线程结束

	return 0;
}


