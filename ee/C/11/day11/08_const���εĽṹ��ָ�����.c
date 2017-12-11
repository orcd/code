/* ************************************************************************
 *       Filename:  08_const修饰的结构体指针变量.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 12时11分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

struct Student
{
	int score;
	char name[50];
	int age;
};

int main()
{
	struct Student obj;
	struct Student * p1 = &obj;
	p1->age = 18;
	p1 = NULL;

	const struct Student * p2 = &obj;
	//p2->age = 18; //err
	p2 = NULL;

	struct Student * const p3 = &obj;
	//p3 = NULL; //err
	p3->age = 18;


	return 0;
}
