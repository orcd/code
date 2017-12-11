/* ************************************************************************
 *       Filename:  15_strlen的实现.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 16时46分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

//1、声明：把函数定义的{}换成分号
//2、声明时，可以加extern关键字
//3、函数只能定义一次，但是可以声明多次
//4、声明时，变量名字可以不写
int my_strlen(char str[]);
extern int my_strlen(char str[]);
extern int my_strlen(char []);

int main()
{
	char str[] = "abc\012mike";
	int len;
	//调用调用时，只会往前找函数的定义，如果前面没有定义(别的地方定义)，而且也没有声明，有些编译器编译不过(G++)
	//如果函数的定义没有放在调用的前面，需要声明，声明目的告诉编译器这个函数已经定义了，只是放在别的地方
	len = my_strlen(str);
	printf("len = %d\n", len);

	return 0;
}

int my_strlen(char str[])
{
	int i = 0;
	while(str[i] != '\0')
	{
		++i;
	}

	return i;
}


