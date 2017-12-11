#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void my_strcpy(char dst[100], char src[])
void my_strcpy01(char *dst, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
}

void my_strcpy02(char *dst, char *src)
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
}

void my_strcpy03(char *dst, char *src)
{
	while (*src != '\0')
	{
		/*
		*dst = *src;
		dst++;
		src++;
		*/
		*dst++ = *src++;
	}
	*dst = '\0';
}

void my_strcpy04(char *dst, char *src)
{
	//1、*dst = *src;
	//2、*dst 是否为'\0'
	//3、dst++， src++
	while(   (*dst++ = *src++)   != '\0')
	{
		
	}
}

//返回一个整型，代表返回状态， 成功返回0， 失败为负数
int my_strcpy(char *dst, const char * src)
{
	if (dst == NULL || src == NULL) //异常处理
	{
		return -1;
	}
	char *tmp_dst = dst;
	const char *tmp_src = src;

	//1、*tmp_dst = *tmp_src;
	//2、判断*dst 是否为'\0', 为‘\0’退出循环
	//3、tmp_dst++， tmp_src++
	while (*tmp_dst++ = *tmp_src++); //后面特意有个分号，代表空语句

	printf("dst = %s, src = %s\n", dst, src);
	return 0;
}
int main()
{
	char src[] = "hello abc";
	char dst[100] = { 0 };
	int res = my_strcpy(dst, &src[0]); //自定义函数, 首元素是char, 需要char *
	if (res != 0)
	{
		printf("res = %d\n", res); //根据状态码，找到错误原因
		system("pause");
		return res;
	}

	printf("dst = %s\n", dst);

	printf("\n");
	system("pause");
	return 0;
}

int main01(void)
{
	char src[] = "hello abc";
	char dst[100] = "aaaaaaaaaaaaaaaaaaaaaaa";

	int i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';

	printf("dst = %s\n", dst);


	printf("\n");
	system("pause");
	return 0;
}
