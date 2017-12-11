#include <stdarg.h>
#include <stdio.h>

//1、可变参数，用三个点表示，一定是最后一个参数
//2、可变参数的前面，至少有一个变量
//3、函数内部无法确定参数个数和参数类型
void func(int a, const char *fmt, ...)
{

	printf("a = %d\n", a);
	//1、定义变量
	va_list ap;

	//2、初始化
	//第2个参数为可变参数前面变量
	va_start(ap, fmt);

	//3、取参数
	const char *arg = fmt;
	//func("abc", "mike", "sb", NULL);
	while(arg != NULL)
	{
		printf("arg = %s\n", arg);
		arg = va_arg(ap, const char *);
	}

	//4、结束
	va_end(ap);
}

int main(int argc, char *argv[])
{
	func(150, "abc", "mike", "sb", NULL);

	return 0;
}


