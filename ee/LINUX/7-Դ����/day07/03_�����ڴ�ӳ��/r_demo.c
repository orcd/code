
#include "../../header.h"


int main(int argc, char *argv[])
{
	//1、key值
	key_t key = ftok("../", 2017);

	//2、创建一个共享内存, 不存在才创建，存在直接获取
	int shmid = shmget(key, 1024, IPC_CREAT|0666);
	if(shmid < 0)
	{
		perror("shmget");
		return -1;
	}

	//3、建立映射
	//NULL， 让系统自动分配地址
	//0：可读可写权限
	void *p = shmat(shmid, NULL, 0);
	if(p == NULL)
	{
		perror("shmat");
		return -1;
	}

	//取内存中的内容
	printf("buf = %s\n", (char *)p);

	//4、断开映射，内存是没有删除
	shmdt(p);


	return 0;
}


