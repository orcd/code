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
#include <stdlib.h>

//声明一个结构体类型，它是类型，不是变量
struct Student
{
	int score;
	char *name;
	int age;
}; //这里有分号，这是语法

int main()
{
	struct Student obj;
	obj.score = 59;
	obj.name = (char *)malloc(100); //指向堆区
	strcpy(obj.name, "mike");
	obj.age = 18;

	printf("%d, %s, %d\n", obj.score, obj.name, obj.age);

	return 0;
}

int main02()
{
	struct Student obj;
	obj.score = 59;
	char buf[100];
	obj.name = buf; //指向栈区数组
	strcpy(obj.name, "mike");
	obj.age = 18;

	printf("%d, %s, %d\n", obj.score, obj.name, obj.age);

	return 0;
}

int main01()
{
	struct Student obj;
	obj.score = 59;
	obj.name = "mike"; //没有保存内容，保存地址
	obj.age = 18;

	printf("%d, %s, %d\n", obj.score, obj.name, obj.age);


	


	return 0;
}


