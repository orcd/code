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
	struct Student * p;
	//指向堆区， struct Student *指向struct Student
	p = (struct Student *)malloc(sizeof(struct Student));

	p->name = (char *)malloc(100);

	p->score = 59;
	strcpy(p->name, "mike");
	p->age = 18;

	printf("%d, %s, %d\n", p->score, p->name, p->age);
	//先释放成员，再释放p
	free(p->name);
	p->name = NULL;
	free(p);
	p = NULL;

	return 0;
}




