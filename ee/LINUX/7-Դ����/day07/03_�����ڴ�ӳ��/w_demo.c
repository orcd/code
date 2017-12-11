/* ************************************************************************
 *       Filename:  01_获取和删除共享内存.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月24日 09时24分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


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

	//给指针所指向的内存拷贝内容
	strcpy((char *)p, "hello mike");

	//4、断开映射，内存是没有删除
	shmdt(p);


	return 0;
}


