/* ************************************************************************
 *       Filename:  11_memset.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月13日 15时10分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h> //memxxx()
#include <stdio.h>

int main()
{
	int a;
	//memset的作用用于给一段内存清0
	memset(&a, 0, sizeof(a));
	// 0000 0001 0000 0001 0000 0001 0000 0001
	memset(&a, 1, sizeof(a)); //给每一个字节设置指定的数
	printf("a = %d\n", a);

	int b[100];
	memset(&b[0], 0, sizeof(b));


	return 0;
}


