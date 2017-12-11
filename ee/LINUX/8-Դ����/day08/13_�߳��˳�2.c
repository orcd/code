#include "../header.h"


void * func(void *p)
{
	while(1)
	{
		sleep(1);
		printf("tid = %lu\n", pthread_self());
	}
	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	pthread_create(&tid, NULL, func, NULL);
	pthread_detach(tid); //让系统自动回收tid线程的资源，

	int i = 0;
	while(1)
	{
		sleep(1);
		i++;
		if(5==i)
		{
			//break;
			//return 0; //return的作用是中断main函数，main函数结束了，进程结束了
			pthread_exit(NULL); //线程退出函数, 只是退出主线程，没有退出进程
		}
	}

	return 0;
}


