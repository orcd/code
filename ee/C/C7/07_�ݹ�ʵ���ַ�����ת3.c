#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void func(char *p, char *buf)
{
	if (*p == '\0')
	{
		return;
	}

	func(p + 1, buf);

	//printf("%c", *p);
	strncat(buf, p, 1);
}

int main(void)
{
	char buf[128] = { 0 };
	char str[] = "123456";
	func(str, buf); //Ê×ÔªËØµØÖ·
	printf("buf = %s\n", buf);


	printf("\n");
	system("pause");
	return 0;
}
