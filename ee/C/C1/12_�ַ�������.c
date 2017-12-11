#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1、普通常量就是一个固定的数
	//2、字符串常量是一个地址，首元素地址，地址有可能变
	printf("%d, %d\n", 10, 10);
	printf("%p, %p\n", "abc", "abc"); //同一个字符串地址是否一样，取决于编译器
	printf("%s, %s\n", "abc", "abc"+1);
	printf("%c, %c\n", *("abc"), *("abc" + 1));
	printf("%c, %c\n", "abc"[0], "abc"[1]);

	//"abc" = 10; //它是常量，不能修改
	//"abc"首元素是char, 需要char *保存其地址
	char *p1 = "abc"; //它是指针变量，没有保存内容，保存的是地址
								//指针变量可以修改，指针所指向内存不能改
	char *p2 = "abc";
	printf("p1 = %p, p2 = %p\n", p1, p2);

	p1 = "mike"; //ok
	//p1[0] = 't'; //err, 字符串常量只读，不能改

	char p3[] = "abc"; //它是数组，没有保存地址，保存的是内容
	//p3 = "mike"; //err, 数组名是常量
	p3[0] = 't'; //ok


	printf("\n");
	system("pause");
	return 0;
}
