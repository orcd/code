#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char buf[] = "1234 5678";
	int a;
	sscanf(buf, "%*d %d", &a);
	printf("a = %d\n", a);

	char s1[100];
	sscanf("mike abc", "%*s %s", s1);
	printf("s1 = %s\n", s1);

	char buf2[] = "abc123";
	char s2[100];
	sscanf(buf2, "%2s", s2);
	printf("s2 = %s\n", s2);

	char buf3[] = "azbcsdgfsd1234";
	char s3[100];
	sscanf(buf3, "%*[a-z]%[0-9]", s3);
	printf("s3 = %s\n", s3);

	//最后一种
	char buf4[] = "abc,hello,mike";
	char str1[100], str2[100], str3[100];
	//sscanf(buf4, "%s,%s,%s", str1, str2, str3); //不可以
	//找字符，指定遇到逗号结束
	sscanf(buf4, "%[^,]", str1);
	printf("str1 = %s\n", str1);

	sscanf(buf4, "%*[^,],%[^,]", str2);
	printf("str2 = %s\n", str2);

	sscanf(buf4, "%*[^m]%[^i]", str3);
	printf("str3 = %s\n", str3);


	printf("\n");
	system("pause");
	return 0;
}
