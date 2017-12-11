/* ************************************************************************
 *       Filename:  01_execl.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月21日 17时26分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../../header.h"


int main(int argc, char *argv[])
{
	printf("我是尸体：getpid() = %u\n", getpid());

	//l代表参数列表
	//第一个参数，是外部程序，加上路径\
	//第二参数为占位符，必须要写上
	//后面的参数，就是给外部程序传的参数
	//最后以以NULL结束
	//execl("./test", "", "mike", NULL);
	execlp("ls", "", "-a", NULL);
	//如果是p, 无需指定路径，因为它会在PATH找这个可执行程序
	//exec如果执行成功，execl无法执行下面的代码，原因是进程已经替换
	//只有执行失败，才能往下走
	perror("execl:");
	printf("are u ok\n");


	return 0;
}


