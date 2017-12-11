
#include "../header.h"

//定义互斥锁
pthread_mutex_t lock;

void my_print(char *str)
{
	while(*str != '\0')
	{
		putchar(*str);
		fflush(stdout);
		str++;
		usleep(1000*500); //500毫秒， usleep()以微秒为单位
	}
}

void * func_one(void *p)
{
	char *str = "hello";
	pthread_mutex_lock(&lock);
	my_print(str);
	pthread_mutex_unlock(&lock);
	return NULL;
}

void * func_two(void *p)
{
	char *str = "world";
	pthread_mutex_lock(&lock);
	my_print(str);
	pthread_mutex_unlock(&lock);
	return NULL;
}

int main(int argc, char *argv[])
{

	//初始化，默认锁是打开的
	pthread_mutex_init(&lock, NULL);

	pthread_t tid1, tid2;
	
	pthread_create(&tid1, NULL, func_one, NULL);
	pthread_create(&tid2, NULL, func_two, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	//销毁锁
	pthread_mutex_destroy(&lock);

	return 0;
}


