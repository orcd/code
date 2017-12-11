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
#include <string.h>
#include <time.h>
#define MAX 10

void write_file()
{
	//打开文件
	FILE *fp = fopen("2.txt", "w"); //只写方式打开
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}

	srand((unsigned int)time(NULL)); //设置种子
	int i;
	int a, b;
	char op[] = {'+', '-', '*', '/'};
	int k;
	char buf[100];
	int n = sizeof(op)/sizeof(*op);
	for(i = 0; i < MAX; ++i)
	{
		k = rand()%n; //0~n-1,
		//printf("ch = %c\n", op[k]);
		a = rand()%100+1;
		b = rand()%100+1;
		sprintf(buf, "%d%c%d=\n", a, op[k], b);
		//printf("buf = %s\n", buf);
		fputs(buf, fp);
	}

	//关闭文件
	fclose(fp);
}

int calc(int a, int b, char ch)
{
	switch(ch)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}

	return 0;
}

void read_file()
{
	//打开文件
	FILE *fp = fopen("2.txt", "r"); //只读方式打开
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}

	char buf[1024];
	char tmp[4*1024] = {0}; //定义一个临时数组，需要初始化
	int a, b;
	char ch;
	while(1)
	{
		fgets(buf, sizeof(buf), fp);
		if( feof(fp))
		{
			break; 
		}

		//printf("buf = %s\n", buf);
		sscanf(buf, "%d%c%d=\n", &a, &ch, &b);
		//printf("%d%c%d=%d\n", a, ch, b, calc(a, b, ch));
		sprintf(buf, "%d%c%d=%d\n", a, ch, b, calc(a, b, ch));
		//printf("buf = %s", buf);
		strcat(tmp, buf); //字符串连接
	}
	
	
	fclose(fp); //关闭文件

	//printf("tmp = %s\n", tmp);
	
	//重新以"w"方式打开文件，为了清空文件
	fp = fopen("2.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return;
	}

	fputs(tmp, fp);

	fclose(fp);
}

int main()
{
	//write_file();
	read_file();

	return 0;
}


