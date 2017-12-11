#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

const int a = 10;//常量区，一旦初始化，不能修改,有内存

int main()
{
	//a = 20;
	const int b = 20;//栈区，
	//b = 100;
	int *p = &b;

	*p = 100;
	printf("%d\n", b);

	extern const int c;//告诉编译器，这个c我在别的文件中有，不要给我报错
	printf("c=%d\n", c);
	system("pause");
	return EXIT_SUCCESS;
}

