/* ************************************************************************
 *       Filename:  07_fwrite的使用.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 11时46分20秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

typedef struct Student
{
	int score;
	char name[50];
	int age;
}Student;


int main()
{
	FILE *fp = fopen("7.txt", "r");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	int ret;
	struct Student a[10];

	//返回值，返回读取的数目
	//如果文件内容足够，返回值和用户指定的数字一样
	//如果文件内容不够，返回值少于用户指定的数字，返回实际读取数目
	//ret = fread(a, sizeof(struct Student), 5, fp);
	//printf("ret = %d, %d, %s, %d\n", ret, a[1].age, a[1].name, a[1].score);
	
	int i = 0;
	while(1)
	{
		ret = fread(&a[i], 1, sizeof(struct Student), fp);
		if(ret == 0)
		{
			break;
		}
		i++;
	}

	int n = i;
	for(i = 0; i < n; ++i)
	{
		printf("%d, %s, %d\n", a[i].age, a[i].name, a[i].score);
	}


	fclose(fp);

	return 0;
}


