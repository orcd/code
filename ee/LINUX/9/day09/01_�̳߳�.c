#include "../header.h"

int num = 0;

void * func(void *p)
{
	while(1)
	{
		++num;
		sleep(1);
		printf("sub thread = %lu, num = %d\n", pthread_self(), num);
	}

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid[10];
	int i = 0;
	//创建线程
	for(i = 0; i < 10; ++i)
	{
		pthread_create(&tid[i], NULL, func, NULL);
	}

	//主线程
	while(1)
	{
		sleep(1);
		printf("main thread = %lu\n", pthread_self());
	}

	return 0;
}


