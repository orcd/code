#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char ip[] = "127.0.0.1";
	int a, b, c, d;
	sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d);
	printf("%d,%d,%d,%d\n", a, b, c, d);

	int tmp = 0;
	unsigned char * p = (unsigned char *)&tmp;
	p[0] = d;
	p[1] = c;
	p[2] = b;
	p[3] = a;

	printf("a = %x\n", tmp); //0x7f000001


	printf("\n");
	system("pause");
	return 0;
}
