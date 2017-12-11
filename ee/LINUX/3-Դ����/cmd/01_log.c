/* ************************************************************************
 *       Filename:  01_log.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月18日 09时13分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include <stdio.h>
#include <stdarg.h>
#define PATH "./log.txt" //没有分号

//可变参数宏
#define log(...) writefile(__FILE__, __LINE__, __VA_ARGS__) //没有分号

//函数定义可以使用..., 调用时无法用...
void writefile(const char *file, int line, const char * fmt, ...)
{
	FILE *fp = fopen(PATH, "ab"); //以追加方式打开，不存在会新建
	if(NULL == fp)
	{
		perror("fopen err");
		return;
	}
	
	fprintf(fp, "[%s:%d] ", file, line); //先往文件写文件名和行号

	va_list ap; //定义变量
	va_start(ap, fmt); //初始化
	vfprintf(fp, fmt, ap); //写内容，自动写入到fp所关联的文件
	va_end(ap); //结束
	fprintf(fp, "\n"); //人为增加换行

	fclose(fp);
}

int main(int argc, char *argv[])
{
	int a = 10;
	log("a = %d\n", a);

	a = 111;
	char buf[100] = "aaaa";
	log("========================>");
	log("buf = %s, a = %d\n", buf, a);

	return 0;
}


