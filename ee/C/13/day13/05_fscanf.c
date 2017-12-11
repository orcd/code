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
	FILE *fp = fopen("5.txt", "r");

	int ret;
	int a, b;
	ret = fscanf(fp, "%d,%d\n", &a, &b);
	printf("ret = %d, %d, %d\n", ret, a, b);

	fclose(fp);

	return 0;
}

int main02()
{
	FILE *fp = fopen("4.txt", "r");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}


	int ret;
	int a;
	ret = fscanf(fp, "%d\n", &a);
	printf("ret = %d, a = %d\n", ret, a);

	ret = fscanf(fp, "%d\n", &a);
	printf("ret = %d, a = %d\n", ret, a);

	a = 0;
	ret = fscanf(fp, "%d\n", &a); //读取失败，返回-1， a不会改变，保存上一次的值
	printf("ret = %d, a = %d\n", ret, a);

	ret = fscanf(fp, "%d\n", &a);
	printf("ret = %d, a = %d\n", ret, a);

	fclose(fp);

	return 0;
}


