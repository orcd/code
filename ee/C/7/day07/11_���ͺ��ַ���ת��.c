/* ************************************************************************
 *       Filename:  11_整型和字符串转换.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 15时16分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main01()
{
	//字符串转整数
	//跳过\r, \n, \t, 空格
	char str[] = "\r \n \t -123";
	int a = atoi(str);
	printf("a = %d\n", a);

	int b;
	sscanf(str, "%d", &b);
	printf("b = %d\n", b);

	//整型转字符串
	int num = -234;
	char buf[100];
	sprintf(buf, "%d", num);
	printf("buf = %s\n", buf);


	return 0;
}

int main()
{
	printf("111111111111\n");

	main01();

	return 0;
}


