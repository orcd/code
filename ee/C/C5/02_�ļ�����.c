#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 4 * 1024

int main(void)
{
	char *path1 = "test.jpg";
	char *path2 = "xxx.jpg";

	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	int len;
	unsigned char buf[SIZE];

	fp1 = fopen(path1, "rb"); //ֻ����ʽ��Դ�ļ�
	if (NULL == fp1)
	{
		perror("fopen fp1");
		goto END;
	}

	fp2 = fopen(path2, "wb"); //ֻд��ʽ��Ŀ���ļ�
	if (NULL == fp2)
	{
		perror("fopen fp2");
		goto END;
	}

	while (1)//�����٣�д����
	{
		len = fread(buf, 1, sizeof(buf), fp1);
		printf("len = %d\n", len);
		if (len == 0)
		{
			break; //������
		}
		fwrite(buf, 1, len, fp2);
	}

END:
	if (NULL != fp1)
	{
		fclose(fp1);
	}

	if (NULL != fp2)
	{
		fclose(fp2);
	}



	printf("\n");
	system("pause");
	return 0;
}
