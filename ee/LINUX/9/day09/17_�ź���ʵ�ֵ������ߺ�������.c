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

int num = 1; //产品个数
int total = 100;
sem_t csem, psem;

void * produce_func(void *p)
{
	while(1)
	{
		
		sem_wait(&psem);
		num++;
		printf("生产者生产了一个产品，总数为：%d\n", num);
	
		sem_post(&csem);
		sleep( (rand())%3+1 ); //1~3
	}

	return NULL;
}


void * custom_func(void *p)
{
	while(1)
	{
		sem_wait(&csem);
		num--;
		printf("消费者消费一个产品，剩下为：%d\n", num);

		sem_post(&psem);
		sleep( (rand())%3+1 ); //1~3
	}

	return NULL;
}

int main(int argc, char *argv[])
{
	sem_init(&csem, 0, num); 
	sem_init(&psem, 0, total - num); 

	srand(time(NULL));

	pthread_t tid[20];
	int i = 0;
	for(i = 0; i < 15; ++i)
	{
		pthread_create(&tid[i], NULL, produce_func, NULL);
	}
	
	for(i = 15; i < 20; ++i)
	{
		pthread_create(&tid[i], NULL, custom_func, NULL);
	}
	

	while(1);

	return 0;
}


