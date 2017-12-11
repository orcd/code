/* ************************************************************************
 *       Filename:  08_ctime.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 11时10分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"

int main(int argc, char *argv[])
{
	time_t t1 = time(NULL); //获取当前时间
	printf("t1 = %lu\n", t1);

	char *str = ctime(&t1); //把time_t格式转换为字符串
	printf("str = %s\n", str);


	struct tm *p = localtime(&t1); //转换为时间结构体
	printf("%d年%d月%d日\n", 1900+p->tm_year, p->tm_mon+1, p->tm_mday);

	char *day[] = {"7", "1", "2", "3", "4", "5", "6"};
	printf("星期%s, %d:%d:%d\n", day[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec);


	return 0;
}


