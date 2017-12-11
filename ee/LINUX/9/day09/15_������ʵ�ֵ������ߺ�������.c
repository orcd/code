/* ************************************************************************
 *       Filename:  13_读写锁特点.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月27日 15时40分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

pthread_mutex_t lock;
pthread_cond_t cond;
int num = 0; //产品个数

void * produce_func(void *p)
{
	while(1)
	{
		pthread_mutex_lock(&lock);
		num++;
		printf("生产者生产了一个产品，总数为：%d\n", num);
	
		pthread_cond_signal(&cond);

		pthread_mutex_unlock(&lock);

		sleep( (rand())%3+1 ); //1~3
	}

	return NULL;
}


void * custom_func(void *p)
{
	while(1)
	{
		pthread_mutex_lock(&lock);
		if(num == 0)
		{
			printf("没有产品\n");
			pthread_cond_wait(&cond, &lock);
			printf("已经唤醒\n");
		}

		num--;
		printf("消费者消费一个产品，剩下为：%d\n", num);
		pthread_mutex_unlock(&lock);

		//sleep(1);
		sleep( (rand())%4+1 ); //1~4
	}

	return NULL;
}

int main(int argc, char *argv[])
{
	pthread_mutex_init(&lock,	NULL);
	pthread_cond_init(&cond,	NULL);

	srand(time(NULL));

	pthread_t tid[10];
	int i = 0;
	for(i = 0; i < 2; ++i)
	{
		pthread_create(&tid[i], NULL, produce_func, NULL);
	}
	
	for(i = 2; i < 10; ++i)
	{
		pthread_create(&tid[i], NULL, custom_func, NULL);
	}
	

	while(1);
	//销毁
	pthread_mutex_destroy(&lock);
	pthread_cond_destroy(&cond);

	return 0;
}


