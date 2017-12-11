
#include "../header.h"

//定义互斥锁
sem_t flag;

void my_print(char *str)
{
	sem_wait(&flag); //-1
	while(*str != '\0')
	{
		putchar(*str);
		fflush(stdout);
		str++;
		usleep(1000*500); //500毫秒， usleep()以微秒为单位
	}
	sem_post(&flag); //+1
}

void * func_one(void *p)
{
	char *str = "hello";
	my_print(str);
	return NULL;
}

void * func_two(void *p)
{
	char *str = "world";
	my_print(str);
	return NULL;
}

int main(int argc, char *argv[])
{

	//初始化，默认锁是打开的
	//中间参数为0， 用于线程
	//最后一个参数就是信号量的初始化值
	sem_init(&flag, 0, 1);

	pthread_t tid1, tid2;
	
	pthread_create(&tid1, NULL, func_one, NULL);
	pthread_create(&tid2, NULL, func_two, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	//销毁锁
	sem_destroy(&flag);

	return 0;
}


