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
	//内部成员不能初始化
	//结构体只是类型，没有定义变量前，没有空间，无法赋值
	int score;
	char name[50];
	int age;
}; //这里有分号，这是语法

int main()
{
	//定义结构体变量， 类型 变量名
	//struct Student是结构体类型
	//obj是变量名
	struct Student obj;
	//如果结构体是普通变量，通过点运算符操作成员
	obj.score = 59;
	strcpy(obj.name, "mike");
	obj.age = 18;

	//如果结构体是指针类型，通过->操作成员
	printf("%d, %s, %d\n", (&obj)->score, (&obj)->name, (&obj)->age);

	int age;
	age = 17;
	printf("age = %d, %d\n", age, obj.age);

	return 0;
}


