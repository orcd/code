/* ************************************************************************
 *       Filename:  07_字符指针.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 12时04分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

void my_print(char *p)
{
	int i = 0;
	while( *(p+i) != '\0')
	{
		printf("%c", p[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	char str[] = "abc";
	//my_print(str); //首元素地址
	//printf("%s\n", str[0]); //   *str[0], *(str[0]+1), err
	char * p = 'a';
	p = 97;
	//printf("%c\n", *p); //操作野指针所指向的内存， err
	printf("%c\n", str[0]);

	return 0;
}

int main01()
{
	char str[] = "abc";
	//首元素是char, 需要char *保存首元素地址
	char * p = &str[0];
	p = str;
	printf("%c\n", *p);
	*p = 't';
	printf("%s, %s\n", str, p); //%s, 传递的是首元素地址p，操作的却是元素*p


	return 0;
}


