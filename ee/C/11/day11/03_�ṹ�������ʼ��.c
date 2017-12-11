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
	//定义变量同时赋值，结构体变量初始化需要{}
	struct Student obj = {59, "mike", 18}; //按顺序初始化
	struct Student obj2 = {.name="mike", .age=18}; //指定成员
	printf("%d, %s, %d\n", obj2.score, obj2.name, obj2.age);

	return 0;
}


