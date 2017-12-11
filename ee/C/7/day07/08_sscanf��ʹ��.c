/* ************************************************************************
 *       Filename:  08_sscanf的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 12时06分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int x, y;
	//scanf("x = %d, y = %d", &x, &y); //针对键盘
	
	char str[100] = "x = 1, y = 2";
	//从str中提取内容，按"x = %d, y = %d"，这种格式提取
	sscanf(str, "x = %d, y = %d", &x, &y);
	printf("%d, %d\n", x, y);

	//提取整型最简单，数与数之间有非数字分隔符即可
	char str2[100] = "1234";
	int a, b = 0, c = 0, d = 0;
	//只有第一个数提取成功，后面3个数提取失败, 后三个数保存原来的值
	sscanf(str2, "%d%d%d%d", &a, &b, &c, &d); 
	printf("%d,%d,%d,%d\n",a, b, c, d);

	char str3[100] = "1a2b3c4";
	sscanf(str3, "%da%db%dc%d", &a, &b, &c,&d);
	printf("%d,%d,%d,%d\n",a, b, c, d);

	//字符串提取，默认只能提取以空格分隔的字符串
	char s1[100] = {0}, s2[100] = {0}, s3[100] = {0};
	char str4[100] = "mike,sb,250";
	//只有第一个数提取成功，后面2个数提取失败, 后2个保存原来的值
	sscanf(str4, "%s,%s,%s", s1, s2, s3);
	printf("s1 = %s, s2=%s, s3=%s\n", s1, s2, s3);

	return 0;
}


