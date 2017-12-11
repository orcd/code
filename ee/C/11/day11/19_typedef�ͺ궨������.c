/* ************************************************************************
 *       Filename:  19_typedef和宏定义区别.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月14日 17时18分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

#define int64 int //预处理语句，只要出现int64, 替换为int
#define DPCHAR char * 

int main()
{
	int64 a;
	
	typedef int int32; //编译语句，有分号
	int32 b; //int b

	DPCHAR p1, p2;
	//char *p1, p2;
	//char *p1;
	//char p2
	printf("%lu, %lu\n", sizeof(p1), sizeof(p2));

	typedef char * TPCHAR;
	TPCHAR q1, q2;
	printf("%lu, %lu\n", sizeof(q1), sizeof(q2));


	return 0;
}


