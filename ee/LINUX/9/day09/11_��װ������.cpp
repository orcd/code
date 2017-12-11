/* ************************************************************************
 *       Filename:  11_封装互斥锁.cpp
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月27日 14时37分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

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

int main(int argc, char *argv[])
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


