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

void func(struct Student * s2, struct Student * s1)
{
	*s2 = *s1;
}

void print_stu(struct Student s)
{
	printf("%d, %s, %d\n", s.score, s.name, s.age);
}

void print_stu2(const struct Student * const s)
{
	printf("%d, %s, %d\n", s->score, s->name, s->age);
}

int main()
{
	struct Student s1 = {59, "mike", 18};
	struct Student s2 = {0};
	func(&s2, &s1);
	print_stu2(&s2);

	return 0;
}


