/* ************************************************************************
 *       Filename:  04_fprintf.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 11时14分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("4.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	/*  
	int ret;
	ret = fprintf(fp, "a=%d,b=%d\n", 10, 20); //返回值为写入文件的字符个数, 失败为-1
	printf("ret = %d\n", ret);
	*/

	fprintf(fp, "%d\n", 10);
	fprintf(fp, "%d\n", 20);


	fclose(fp);

	return 0;
}


