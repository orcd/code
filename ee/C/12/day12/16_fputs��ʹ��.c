/* ************************************************************************
 *       Filename:  16_fputs的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月16日 16时00分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE * fp = fopen("16.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	int ret;
	fputs("aa\n", fp);
	ret = fputs("bb\n", fp); //返回值，成功为1， 失败为-1
	printf("ret = %d\n", ret);


	fclose(fp);

	return 0;
}


