/* ************************************************************************
 *       Filename:  17_bool.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 17时00分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
//#include <stdbool.h> //bool

enum _bool
{
	false,
	true 
};

//typedef改类型名
typedef enum _bool bool;

int main()
{
	bool flag;
	flag = true;
	flag = false;

	return 0;
}


