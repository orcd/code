
extern "C"
{
#include "../header.h"
}



class MyLock
{
public:
	MyLock(pthread_mutex_t *tmp)
	{
		p = tmp;
	}

	void lock()
	{
		pthread_mutex_lock(p);
	}

	void unlock()
	{
		pthread_mutex_unlock(p);
	}

	~MyLock()
	{
		printf("析构函数\n");
		pthread_mutex_unlock(p);
	}

private:
	pthread_mutex_t *p;
};

pthread_mutex_t mutex;

void my_print(char *str)
{
	MyLock tmp(&mutex);
	tmp.lock();
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
	pthread_mutex_init(&mutex, NULL);

	pthread_t tid1, tid2;
	
	pthread_create(&tid1, NULL, func_one, NULL);
	pthread_create(&tid2, NULL, func_two, NULL);

	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);

	//销毁锁
	pthread_mutex_destroy(&mutex);

	return 0;
}

int main01(int argc, char *argv[])
{
	//初始化
	pthread_mutex_init(&mutex, NULL);

	{
		MyLock tmp1(&mutex); //构造函数
		tmp1.lock();
	}

	printf("1111111111\n");

	{
		MyLock tmp2(&mutex);
		tmp2.lock();
	}
	printf("2222222222\n");


	//释放
	pthread_mutex_destroy(&mutex);


	return 0;
}


