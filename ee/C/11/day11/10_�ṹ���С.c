/* ************************************************************************
 *       Filename:  01_结构体的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 10时09分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

//声明一个结构体类型，它是类型，不是变量
struct Student
{
	int score;
	char name[50];
	int age;
}; //这里有分号，这是语法

int main()
{
	struct Student * p;
	struct Student obj;
	printf("%lu, %lu\n", sizeof(p), sizeof(obj));
	


	return 0;
}


