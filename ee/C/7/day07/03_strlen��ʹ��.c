/* ************************************************************************
 *       Filename:  03_strlen的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 10时52分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "abc";
	//strlen: 测字符串内容长度，遇到'\0'结束，长度不包括'\0'
	//sizeof: 不是测字符串内容长度，测数据类型大小
	printf("s1: %lu, %lu\n", strlen(s1), sizeof(s1));

	char s2[10] = "abc";
	//sizeof: 不是测字符串内容长度，测数据类型大小, 不会因为内容而改变类型大小
	printf("s2: %lu, %lu\n", strlen(s2), sizeof(s2));

	char s3[] = "abc\0def";
	printf("s3: %lu, %lu\n", strlen(s3), sizeof(s3));

	// '\012'是一个8进制字符，就是'\n'
	char s4[] = "abc\012a";
	printf("s4: %lu, %lu\n", strlen(s4), sizeof(s4));

	return 0;
}


