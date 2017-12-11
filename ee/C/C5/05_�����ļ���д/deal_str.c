#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include <stdio.h>

int trim_str(char *buf)
{
	char * p1 = buf;							 //Æðµã
	char * p2 = buf + strlen(buf) - 1;  //ÖÕµã
	int len;

	while (*p1 == ' ' || *p1 == '\r' || *p1 == '\n' || *p1 == '\t')
	{
		p1++;
	}

	while ((*p2 == ' ' || *p2 == '\r' || *p2 == '\n' || *p2 == '\t') && p2 != buf)
	{
		p2--;
	}
	len = p2 - p1 + 1;
	if (len <= 0)
	{
		printf("len = %d\n", len);
		return -1;
	}
	strncpy(buf, p1, len);
	buf[len] = '\0';

	return 0;
}