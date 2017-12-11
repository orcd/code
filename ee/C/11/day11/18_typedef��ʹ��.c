/* ************************************************************************
 *       Filename:  18_typedef的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 17时07分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

typedef struct Student
{
	int a;
}Stu;

typedef struct Student S;
S obj;

Stu tmp;

typedef enum BOOL
{
	FALSE,
	TRUE
}BOOL;

int main()
{
	//作用：给一个已存在的类型改名，不能新建类型
	//1、把一个复杂的名字改为简单点
	typedef int int64; //有分号
	int64 a; 

	//2、代码移植
	BOOL a = TRUE;  //FLASE

	//3、封装类型
	

	return 0;
}


