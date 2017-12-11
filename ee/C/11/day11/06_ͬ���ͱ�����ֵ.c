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

void func(struct Student s2, struct Student s1)
{
	//s2 = s1;
	memcpy(&s2, &s1, sizeof(struct Student));
	printf("func %d, %s, %d\n", s2.score, s2.name, s2.age);
}

int main()
{
	int a = 10;
	int b;
	b = a;

	struct Student s1 = {59, "mike", 18};
	struct Student s2 = {0};
	//s2 = s1;
	//通过一个函数，把s2的内容给s1一份
	func(s2, s1);
	printf("%d, %s, %d\n", s2.score, s2.name, s2.age);


	return 0;
}


