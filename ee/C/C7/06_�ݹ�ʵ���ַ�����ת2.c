#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char buf[128] = { 0 };

void func(char *p)
{
	if (*p == '\0')
	{
		return;
	}

	func(p + 1);

	//printf("%c", *p);
	strncat(buf, p, 1);
}

int main(void)
{
	char str[] = "123456";
	func(str); //Ê×ÔªËØµØÖ·
	printf("buf = %s\n", buf);


	printf("\n");
	system("pause");
	return 0;
}
