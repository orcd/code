/* ************************************************************************
 *       Filename:  12_fseek返回值验证.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 15时48分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("12.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	fseek(fp, 999999999999, SEEK_SET);
	fputc('a', fp);

	/*  
	int ret;
	//成功为0， 失败为-1
	ret = fseek(fp, -100, SEEK_SET); //相对于开头，往右移动100个字节
	printf("ret = %d\n", ret);*/

	fclose(fp);

	return 0;
}


