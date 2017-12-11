/* ************************************************************************
 *       Filename:  01_fgets_fputs实现的排序.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 09时47分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void write_file()
{
	//打开文件
	FILE *fp = fopen("1.txt", "w"); //只写方式打开
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}

	srand((unsigned int)time(NULL)); //设置种子
	int i;
	int num;
	char buf[100];
	for(i = 0; i < MAX; ++i)
	{
		num = rand()%100+1; //1 ~ 100
		//printf("num = %d\n", num);
		sprintf(buf, "%d\n", num);
		//printf("buf = %s", buf);
		fputs(buf, fp);
	}

	//关闭文件
	fclose(fp);
}

void read_file()
{
	//打开文件
	FILE *fp = fopen("1.txt", "r"); //只读方式打开
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}
	
	char buf[1024];
	char *p;
	int a[1024];
	int i = 0;
	while(1)
	{
		p = fgets(buf, sizeof(buf), fp);
		if(NULL == p) //文件结束
		{
			break;
		}

		//printf("buf = #%s#\n", buf);
		sscanf(buf, "%d\n", &a[i]);
		i++;
	}

	int n = i; //元素个数
	int j, tmp;

	//冒泡排序
	for(i = 0; i < n-1; ++i)
	{
		for(j = 0; j < n-1-i; ++j)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}



	for(i = 0; i < n; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}


	//关闭文件
	fclose(fp);

	//重新以"w"方式打开文件，目的为了清空文件内容
	fp = fopen("1.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}

	//重新给文件写内容
	for(i = 0; i < n; ++i)
	{
		sprintf(buf, "%d\n", a[i]);
		fputs(buf, fp);
	}
	
	fclose(fp);
}

int main()
{
	//write_file();
	read_file();

	return 0;
}


