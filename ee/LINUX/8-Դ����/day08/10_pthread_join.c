#include "../header.h"

int num = 0;

void * func(void *p)
{
	static int a = 10;
	printf("func a = %d\n", a);
	num = 111;
	printf("func num = %d\n", num);
	pthread_exit(&a);
	//return &a;
}

int main(int argc, char *argv[])
{
	pthread_t tid;

	//创建线程
	//最后一个参数，给func传递的参数
	pthread_create(&tid, NULL, func, NULL);

	int *value;
	if( 0 == pthread_join(tid, (void **)&value) )
	{//阻塞等待tid线程结束，结束后，回收资源
		printf("*value = %d\n", *value);
	}

	printf("main num = %d\n", num);


	return 0;
}


