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
	FILE *fp = fopen("7.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}
	
	Student a[] = {
		{59, "mike", 18},
		{66, "lily", 17},
		{77, "hello", 22}
	};

	//fwrite(a, 1, sizeof(a), fp);
	//fwrite(&a[0], 1, sizeof(a), fp);
	//fwrite(&a[0], 3, sizeof(a[0]), fp);
	//fwrite(&a[0], sizeof(a[0]), 3, fp);
	fwrite(a, 1, sizeof(a), fp);

	fclose(fp);

	return 0;
}

int main01()
{
	FILE *fp = fopen("7.txt", "w");
	if(NULL == fp)
	{
		perror("fopen");
		return -1;
	}

	int ret;
	struct Student s = {59, "mike", 18};

	//返回值，成功为写入文件的数目，失败为0
	//往文件写入内容大小为： 1 * sizeof(Struct Student)
	ret = fwrite(&s, 1, sizeof(struct Student), fp); //返回值就是写入内容的大小
	//ret = fwrite(&s, sizeof(struct Student), 1,  fp);
	printf("ret = %d\n", ret);
	

	fclose(fp);

	return 0;
}


