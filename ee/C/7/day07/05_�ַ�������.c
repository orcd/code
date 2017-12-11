/* ************************************************************************
 *       Filename:  05_字符串连接.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 11时20分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char src[] = "hello mike";
	char dst[100] = "abc";
	
	//strcpy(dst, src); //覆盖
	//strcat(dst, src); //追加连接
	//在需要连接字符串'\0'的位置开始连接
	strncat(dst, src, 5); //src的前5个字符追加连接dst的后面
	printf("dst = %s\n", dst);


	char buf[100]; //有可能第0个数就是数字0
	strcat(buf, "abc");
	printf("buf = %s\n", buf);


	return 0;
}


