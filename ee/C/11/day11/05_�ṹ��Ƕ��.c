/* ************************************************************************
 *       Filename:  05_结构体嵌套.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 11时08分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

struct Info
{
	char name[50]; //放字符串
	char sex; //放单个字符
	int age;
};

//结构体成员包含另一个结构体变量
struct Student
{
	int score;
	char group[50];
	//1、可以嵌套任何类型的指针变量
	//2、如果是结构体普通变量，不能嵌套本类型的
	struct Info info;
	//struct Student tmp; //err
};

int main()
{
	struct Student s = {59, "C++", "mike", 'm', 18};
	printf("%d, %s, %s, %c, %d\n", s.score, s.group, s.info.name, s.info.sex, s.info.age);

	return 0;
}


