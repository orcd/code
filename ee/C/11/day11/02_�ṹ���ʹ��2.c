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
}tmp1, tmp2; //这里有分号，这是语法

//strcut Student tmp1, tmp2;


//匿名结构体类型
struct
{
	int score;
	char name[50];
	int age;
}tmp3, tmp4; //这里有分号，这是语法

void func()
{
	static struct Student obj;
	obj.score = 59;
	strcpy(obj.name, "mike");
	obj.age = 18;

}

int main()
{
	struct Student obj;
	obj.score = 59;
	strcpy(obj.name, "mike");
	obj.age = 18;

	printf("%d, %s, %d\n", (&obj)->score, (&obj)->name, (&obj)->age);


	return 0;
}


