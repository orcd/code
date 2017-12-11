/* ************************************************************************
 *       Filename:  04_字符串拷贝.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 11时04分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char src[] = "hello mike";
	char dst[100] = "aaaaaaaaaaaaaaaaaaaaaaaaaaa";

	//把src字符串的内容给dst的数组拷贝一份
	strcpy(dst, src);
	printf("dst = %s\n", dst);

	char buf[100] = "aaaaaaaaaaaaaaaaaaaaaaaa";
	strncpy(buf, src, 5); //把src的前5个字符拷贝给buf, 需要单独处理'\0'
	buf[5] = '\0'; //添加结束符
	printf("buf = %s\n", buf);

	return 0;
}


