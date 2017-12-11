#include <stdio.h>

static int a = 2; 
//1、static只能在本文件使用此变量
//2、每个文件可以定义一个static全局变量
//3、static没有声明，只有定义，只有定义往后的代码才能使用


int main()
{
	printf("a = %d\n", a);
	return 0;
}


