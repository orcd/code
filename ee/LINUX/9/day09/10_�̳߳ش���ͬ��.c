#include "../header.h"

pthread_mutex_t lock;

void * func(void *p)
{
	int num = *(int *)p;
	//解锁
	pthread_mutex_unlock(&lock);
	printf("[%d] sub thread = %lu\n", num, pthread_self());

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_mutex_init(&lock, NULL);

	pthread_t tid[10];
	int i = 0;
	//创建线程
	//int num;
	for(i = 0; i < 10; ++i)
	{
		//加锁lock()
		pthread_mutex_lock(&lock);
		int num = i;
		pthread_create(&tid[i], NULL, func, &num);
	}

	//主线程
	while(1);

	pthread_mutex_destroy(&lock);

	return 0;
}


