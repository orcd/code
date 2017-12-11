#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(char *p)
{
	if (*p == '\0')
	{
		return;
	}

	func(p+1);

	printf("%c", *p);
}

int main(void)
{
	char str[] = "123456";
	func(str); //Ê×ÔªËØµØÖ·


	printf("\n");
	system("pause");
	return 0;
}
