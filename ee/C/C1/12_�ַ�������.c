#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	//1����ͨ��������һ���̶�����
	//2���ַ���������һ����ַ����Ԫ�ص�ַ����ַ�п��ܱ�
	printf("%d, %d\n", 10, 10);
	printf("%p, %p\n", "abc", "abc"); //ͬһ���ַ�����ַ�Ƿ�һ����ȡ���ڱ�����
	printf("%s, %s\n", "abc", "abc"+1);
	printf("%c, %c\n", *("abc"), *("abc" + 1));
	printf("%c, %c\n", "abc"[0], "abc"[1]);

	//"abc" = 10; //���ǳ����������޸�
	//"abc"��Ԫ����char, ��Ҫchar *�������ַ
	char *p1 = "abc"; //����ָ�������û�б������ݣ�������ǵ�ַ
								//ָ����������޸ģ�ָ����ָ���ڴ治�ܸ�
	char *p2 = "abc";
	printf("p1 = %p, p2 = %p\n", p1, p2);

	p1 = "mike"; //ok
	//p1[0] = 't'; //err, �ַ�������ֻ�������ܸ�

	char p3[] = "abc"; //�������飬û�б����ַ�������������
	//p3 = "mike"; //err, �������ǳ���
	p3[0] = 't'; //ok


	printf("\n");
	system("pause");
	return 0;
}
