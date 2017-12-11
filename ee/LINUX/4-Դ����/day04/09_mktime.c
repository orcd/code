

#include "../header.h"

int main(int argc, char *argv[])
{
	time_t t1 = time(NULL); //获取当前时间
	printf("t1 = %lu\n", t1);

	char *str = ctime(&t1); //把time_t格式转换为字符串
	printf("str = %s\n", str);


	struct tm tmp;
	tmp.tm_year = 2017 - 1900;
	tmp.tm_mon = 11 - 1;
	tmp.tm_mday = 19;
	tmp.tm_wday = 0;
	tmp.tm_hour = 11;
	tmp.tm_min = 30;
	tmp.tm_sec = 11;
	time_t t2 = mktime(&tmp);
	printf("t2 = %lu\n", t2);


	return 0;
}


