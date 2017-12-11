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


#include "../header.h"


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

	return 0;
}


