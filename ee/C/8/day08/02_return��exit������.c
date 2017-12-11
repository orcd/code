/* ************************************************************************
 *       Filename:  02_return和exit的区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月08日 09时58分52秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//return作用，中断函数
void func01()
{
	printf("11111111\n");
	return;

	printf("222222222\n");
}

void func02()
{
	printf("func02\n");
	//return; //只是中断当前函数
	exit(100); //中断程序
}

int main()
{
	func02();
	printf("函数调用完毕\n");

	while(1); //死循环，不让程序结束
	return 0;
}



