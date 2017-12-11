/* ************************************************************************
 *       Filename:  14_随机位置读写.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 16时19分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

int main()
{
	FILE *fp = fopen("14.txt", "w+"); //写读权限
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}
	
	fputs("abcef", fp);

	//光标移动到b的后面
	fseek(fp, 2, SEEK_SET);
	fputc('m', fp);


	fseek(fp, 3, SEEK_SET);
	fputs("ab", fp);

	fseek(fp, 0, SEEK_END);
	fputs("mike", fp);

	rewind(fp);
	char buf[100];
	fgets(buf, sizeof(buf), fp);
	printf("buf = %s\n", buf);


	fclose(fp);

	return 0;
}


