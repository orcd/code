/* ************************************************************************
 *       Filename:  09_strcpy的实现.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 14时37分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

char * my_strcpy(char *dst, const char *src)
{
	int i = 0;
	while( *(src+i) != '\0')
	{
		*(dst+i) = *(src+i);
		i++;
	}
	*(dst+i) = '\0';

	return dst;
}

int main()
{
	char src[] = "abc";
	char dst[100];
	char tmp[100] = "hello ";
  
	strcat(tmp, my_strcpy(dst, src)); //函数的返回值继续做另一个函数的参数，链式表达式
	printf("tmp = %s\n", tmp);




	return 0;
}


int main01()
{
	char src[] = "abc";
	char dst[100] = "aaaaaaaaaaaa";
	//my_strcpy(dst, src); //src的内容不是拷贝给dst, src数组的内容给dst的数组
	char *p1 = &src[0];
	char *p2 = &dst[0];
	printf("before: %p, %p\n", p1, p2);
	my_strcpy(p2, p1); //不是把p1拷贝给p2，把p1所指向的内存给p2所指向的内存赋值一份
	printf("after: %p, %p\n", p1, p2);
	printf("dst = %s\n", dst);


	return 0;
}


