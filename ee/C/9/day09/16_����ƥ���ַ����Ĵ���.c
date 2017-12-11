/* ************************************************************************
 *       Filename:  16_查找匹配字符串的次数.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月10日 17时06分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <string.h>
#include <stdio.h>

int main()
{
	char str[] = "adgjldsmikeasgjdsmikea;gjdsmikesakdgjmikedsf";
	char * start = str;
	char *p;
	int n = 0;

	while(1)
	{
		p = strstr(start, "mike");
		if(p != NULL) //有找到
		{
			n++; //累加
			//改变起点位置
			start = p + strlen("mike");
		}
		else
		{
			break; //没有找到，退出循环
		}
	}

	printf("n = %d\n", n);



	return 0;
}


