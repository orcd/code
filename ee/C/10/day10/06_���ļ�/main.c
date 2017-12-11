#include <stdio.h>
//int a = 10; //err

//声明的目的，告诉编译器，定义存在，只是放在别的地方
extern int a; 

int main()
{
	printf("a = %d\n", a);
	return 0;
}


