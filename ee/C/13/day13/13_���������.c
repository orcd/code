/* ************************************************************************
 *       Filename:  13_随机读内容.c
 *    Description:  
 *        Version:  1.0
 *        Created:  2017年09月17日 16时00分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *         Author:  YOUR NAME (), 
 *        Company:  
 * ************************************************************************/

#include <stdio.h>

typedef struct Student
{
	char name[60];
}Stu;

void write_file()
{
	FILE * fp = fopen("13.txt", "w");
	if( NULL == fp)
	{
		perror("fopen");
		return;
	}

	Stu a[] = {"aa", "bb", "cc", "dd"};
	fwrite(a, 1, sizeof(a), fp);

	fclose(fp);
}

void read_file()
{
	FILE * fp = fopen("13.txt", "r");
	if( NULL == fp)
	{
		perror("fopen");
		return;
	}
	
	Stu s;
	fseek(fp, 2*sizeof(Stu), SEEK_SET);
	fread(&s, 1, sizeof(Stu), fp);
	printf("%s\n", s.name);

	//rewind(fp); //把光标移动回开头
	fseek(fp, 0, SEEK_SET);
	fread(&s, 1, sizeof(Stu), fp);
	printf("%s\n", s.name);

	//先把光标移动到结尾
	fseek(fp, 0, SEEK_END);
	long size;
	size = ftell(fp); //测光标到开头的大小
	printf("%ld\n", size);

	fclose(fp);
}

int main()
{
	//write_file();
	read_file();

	return 0;
}


