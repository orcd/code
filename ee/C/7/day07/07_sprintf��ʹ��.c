/* ************************************************************************
 *       Filename:  07_sprintf的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月07日 12时00分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	char str[100];
	//"x = 10, y = 10", 打印到屏幕，写到屏幕
	//printf("x = %d, y = %d", x, y);
	
	//"x = 10, y = 10", 这种格式的字符串不放在屏幕，放在str所代表的数组
	//组包，组字符串
	sprintf(str, "x = %d, y = %d", x, y);
	printf("str = @%s@\n", str);

	return 0;
}


