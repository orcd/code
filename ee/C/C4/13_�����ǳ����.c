#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Teacher
{
	char *name;
	int age;
}Teacher;

int main(void)
{
	Teacher s1;
	s1.name = (char *)malloc(10);
	strcpy(s1.name, "abc");
	s1.age = 18;

	Teacher s2;
	s2 = s1; //默认情况下是浅拷贝，内存的值简单拷贝
	//深拷贝
	s2.name = (char *)malloc(10);
	strcpy(s2.name, s1.name);
	printf("%s, %d\n", s2.name, s2.age);

	free(s1.name);
	free(s2.name);


	printf("\n");
	system("pause");
	return 0;
}
