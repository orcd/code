/* ************************************************************************
 *       Filename:  16_枚举.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 16时46分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <string.h>

/*
#define Empty 0
#define Black 1
#define White 2
*/

enum ChessStatus //枚举类型
{
	//成员不定定义变量，是写标示符
	//默认从0开始，后一个比前一个大1
	Empty, Black=1, White //枚举成员，枚举常量
};

int main()
{
	//定义枚举变量
	enum ChessStatus flag;
	flag = Black;
	printf("%d, %d\n", flag, Empty);

	enum ChessStatus a[8][8];
	memset(a, Empty, sizeof(a));

	a[0][0] = Black;
	a[0][1] = White;


	return 0;
}


