/* ************************************************************************
 *       Filename:  13_chmod.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 14时37分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	//argv[1]文件名
	//argv[2]权限
	long mode = strtol(argv[2], NULL, 8); //将字符串转换为8进制
	printf("mode = %lo\n", mode);

	int ret = chmod(argv[1], mode); //不能修改链接文件C的权限函数
	if(ret < 0)
	{
		perror("chmod");
		return 0;
	}


	return 0;
}


