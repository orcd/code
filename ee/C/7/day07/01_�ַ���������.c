/* ************************************************************************
 *       Filename:  01_字符串的输入.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 10时08分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	//屏幕，标准输出设备， stdout
	//键盘，标准输入设备, stdin
	
	char str[10];
	printf("请输入str:");

	//从stdin这个文件读取内容，内容放str, 最多一次性读取sizeof(str)-1
	//如果一次不能读完，数据不会丢弃，留给下一次读取
	//可以读取空格，可以读取回车，遇到回车结束本次读取
	fgets(str, sizeof(str), stdin);
	printf("str = $%s$\n", str);


	return 0;
}

int main02()
{
	char str[100];
	printf("请输入str: ");
	gets(str); //可以读取空格，不能读取回车，遇到回车结束读取
	printf("str = %s\n", str);

	return 0;
}

int main01()
{
	char str1[100], str2[100];

	printf("请输入str1: ");
	//遇到空格，回车键，结束本次读取，剩下的内容没有丢弃，留给下一次读取
	//不能读取空格和回车键
	scanf("%s", str1);
	printf("str1 = %s\n", str1);

	printf("请输入str2: ");
	scanf("%s", str2);
	printf("str2 = %s\n", str2);

	return 0;
}


