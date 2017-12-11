/* ************************************************************************
 *       Filename:  10_utime.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年11月19日 11时34分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/


#include "../header.h"


int main(int argc, char *argv[])
{
	//utime("./1.txt", NULL);
	
	struct tm tmp;
	tmp.tm_year = 2022 - 1900;
	tmp.tm_mon = 11 - 1;
	tmp.tm_mday = 19;
	tmp.tm_wday = 0;
	tmp.tm_hour = 11;
	tmp.tm_min = 30;
	tmp.tm_sec = 11;
	time_t t2 = mktime(&tmp);

	struct utimbuf buf;
	buf.actime = t2;
	buf.modtime = time(NULL); //修改时间改为当前时间
	utime("1.txt", &buf);


	return 0;
}


