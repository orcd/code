/* ************************************************************************
 *       Filename:  03_test.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月16日 17时09分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdarg.h>

//__VA_ARGS__可变参数宏
#define debug(...) myprint(__FILE__, __LINE__, __VA_ARGS__) //没有分号
void myprint(const char *file, int line, const char * fmt, ...)
{
	printf("[%s:%d] ", file, line);
	//printf(fmt, ...); //err
	//可变参数变量
	va_list ap;

	//初始化
	va_start(ap, fmt);
	
	vprintf(fmt, ap);

	//结束
	va_end(ap);
}

int main(int argc, char *argv[])
{
	myprint(__FILE__, __LINE__, "are u ok? ans = %s\n", "bad");
	//myprint("are u ok? ans = %s\n", "bad");
	debug("this is a test\n");
	debug("this is a test a = %d\n", 111);

	return 0;
}


