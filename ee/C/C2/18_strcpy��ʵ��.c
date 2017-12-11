#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void my_strcpy(char dst[100], char src[])
void my_strcpy01(char *dst, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';
}

void my_strcpy02(char *dst, char *src)
{
	while (*src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
}

void my_strcpy03(char *dst, char *src)
{
	while (*src != '\0')
	{
		/*
		*dst = *src;
		dst++;
		src++;
		*/
		*dst++ = *src++;
	}
	*dst = '\0';
}

void my_strcpy04(char *dst, char *src)
{
	//1��*dst = *src;
	//2��*dst �Ƿ�Ϊ'\0'
	//3��dst++�� src++
	while(   (*dst++ = *src++)   != '\0')
	{
		
	}
}

//����һ�����ͣ�������״̬�� �ɹ�����0�� ʧ��Ϊ����
int my_strcpy(char *dst, const char * src)
{
	if (dst == NULL || src == NULL) //�쳣����
	{
		return -1;
	}
	char *tmp_dst = dst;
	const char *tmp_src = src;

	//1��*tmp_dst = *tmp_src;
	//2���ж�*dst �Ƿ�Ϊ'\0', Ϊ��\0���˳�ѭ��
	//3��tmp_dst++�� tmp_src++
	while (*tmp_dst++ = *tmp_src++); //���������и��ֺţ���������

	printf("dst = %s, src = %s\n", dst, src);
	return 0;
}
int main()
{
	char src[] = "hello abc";
	char dst[100] = { 0 };
	int res = my_strcpy(dst, &src[0]); //�Զ��庯��, ��Ԫ����char, ��Ҫchar *
	if (res != 0)
	{
		printf("res = %d\n", res); //����״̬�룬�ҵ�����ԭ��
		system("pause");
		return res;
	}

	printf("dst = %s\n", dst);

	printf("\n");
	system("pause");
	return 0;
}

int main01(void)
{
	char src[] = "hello abc";
	char dst[100] = "aaaaaaaaaaaaaaaaaaaaaaa";

	int i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = '\0';

	printf("dst = %s\n", dst);


	printf("\n");
	system("pause");
	return 0;
}
