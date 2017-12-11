#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <time.h> 
#include <stdlib.h>
#include <stdio.h>

typedef struct Dict
{
	char *key; //����
	char *content; //����
}Dict;

//char buf[] = "mike\r\n     \t     ";
void trim_key(char *buf)//�ѵ��ʺ���������ַ�ȥ��
{
	int n = strlen(buf) - 1;
	while (buf[n] == '\r' || buf[n] == '\t' || buf[n] == ' ' || buf[n] == '\n')
	{
		--n;
	}

	buf[n + 1] = '\0';
}

//����ֵΪ���ʸ���
int init_dict(Dict ** p, char *path)
{
	FILE *fp = fopen(path, "rb");
	if (NULL == fp)
	{
		perror("fopen");
		return 0;
	}

	//*p = (Dict *)malloc(sizeof(Dict));
	//*p = (Dict *)calloc(1, sizeof(Dict));
	*p = (Dict *)realloc(NULL, sizeof(Dict));
	memset(*p, 0, sizeof(Dict));
	if (NULL == *p)
	{
		return 0;
	}

	char buf[4 * 1024];
	int i = 0;
	int len;
	while (1)
	{
		fgets(buf, sizeof(buf), fp); //������
		if (feof(fp))
		{
			break; //����ѭ��
		}

		len = strlen(buf);
		if (len > 0)
		{
			(*p)[i].key = (char *)malloc(len);
			memset((*p)[i].key, 0, len);
			trim_key(buf);//�ѵ��ʺ���������ַ�ȥ��
			strcpy((*p)[i].key, buf + 1);
		}

		fgets(buf, sizeof(buf), fp); //������
		if (feof(fp))
		{
			break; //����ѭ��
		}
		len = strlen(buf);
		if (len > 0)
		{
			(*p)[i].content = (char *)malloc(len);
			memset((*p)[i].content, 0, len);
			strcpy((*p)[i].content, buf + 6);
		}

		++i;

		//����һ�����ʵĿռ�
		*p = (Dict *)realloc(*p, sizeof(Dict) * (i+1));
		memset(*p+i, 0, sizeof(Dict));
	}

	return i;
}

void clean_dict(Dict *p, int n)
{
	//���ͷų�Աkey, content
	int i;
	for (i = 0; i < n; ++i)
	{
		free(p[i].key);
		free(p[i].content);
	}

	//���ͷ�p
	free(p);
	p = NULL;
}

int search_dict(Dict * p, int n, char *key, char *content)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		if (strcmp(p[i].key, key) == 0)
		{
			strcpy(content, p[i].content);
			return 0; //�ɹ�
		}
	}

	return -1; //û�д˴ʻ�
}

int main()
{
	Dict * p = NULL; //ָ�����
	int n; //�����������ʸ���
	clock_t start, end;


	//�������ݶ��ڶ���
	start = clock();
	n = init_dict(&p, "./dict.txt"); //��ַ����
	end = clock();
	printf("n = %d\n", n);
	if (0 == n)
	{
		printf("n == 0, err\n");
		return -1;
	}
	printf("����ʱ�䣺 %lu ms\n", (end - start) ); //linux��Ҫ����1000�� windows����Ҫ

	start = clock();
	char key[1024] = "��������";
	char content[2048];
	int ret = search_dict(p, n, key, content); //��ѯ���ɹ�Ϊ0��ʧ��Ϊ-1
	if (0 == ret)
	{
		printf("%s ------��  %s\n", key, content);
	}
	else
	{
		printf("û�д˴ʻ�\n");
	}
	end = clock();
	printf("��ѯʱ�䣺 %lu ms\n", (end - start) ); //linux��Ҫ����1000�� windows����Ҫ


	start = clock();
	clean_dict(p, n); //�ͷŶ������ڴ�
	p = NULL;
	end = clock();
	printf("����ʱ�䣺 %lu ms\n", (end - start) ); //linux��Ҫ����1000�� windows����Ҫ

	system("pause");
	return 0;
}
