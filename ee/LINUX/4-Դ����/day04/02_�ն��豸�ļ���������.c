/* ************************************************************************
 *       Filename:  02_终端设备文件是阻塞的.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 09时24分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	char buf[1024] = {0};
	read(0, buf, sizeof(buf)); //从标准输入读取内容
	printf("buf = %s\n", buf);


	return 0;
}


