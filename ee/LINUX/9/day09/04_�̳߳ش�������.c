#include "../header.h"

void * func(void *p)
{
	int num = (int)p;
	printf("[%d] sub thread = %lu\n", num, pthread_self());

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_t tid[10];
	int i = 0;
	//创建线程
	for(i = 0; i < 10; ++i)
	{
		pthread_create(&tid[i], NULL, func, i);
	}

	//主线程
	while(1);

	return 0;
}


