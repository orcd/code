/* ************************************************************************
 *       Filename:  17_两头堵模型.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 17时15分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "            are u ok?           ";
	char tmp[100];
	int n = strlen(str);
	char * start = &str[0];
	char * end = &str[n-1];

	while( *start == ' ')
	{
		start++;
	}

	while( *end == ' ' && end != &str[0])
	{
		end--;
	}

	n = end-start+1;
	if(n <= 0)
	{
		return -1;
	}

	printf("n = %d\n", n);
	strncpy(tmp, start, n);
	tmp[n] = '\0'; //处理结束符
	printf("tmp = #%s#\n",tmp);


	return 0;
}

int main01()
{
	char test[] = "abc";
	int n = strlen(test); //3
	char *start = &test[0];
	char *end = &test[n-1];
	n = end - start;
	printf("n = %d\n", n);


	return 0;
}


