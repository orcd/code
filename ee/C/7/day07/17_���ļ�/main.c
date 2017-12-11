#include <stdio.h>

extern int my_strlen(char str[]);


int main()
{
	char str[] = "abc\012mike";
	int len;
	len = my_strlen(str);
	printf("len = %d\n", len);


	return 0;
}


