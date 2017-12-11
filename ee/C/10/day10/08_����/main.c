#include <stdio.h>


int main()
{
	static void func();
	func();
	return 0;
}

static void func()
{
	printf("aaaaaaaaa\n");
}
