#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "deal_str.h"
#define MAX 1024*1024*2  //2M

int write_cfg(char *path, char *key, char *value)//д�����ļ�
{
	int ret = 0;
	FILE *fp = NULL;
	char *tmp = NULL;
	enum Status{Yes, No}flag; //Yes�����ļ����ڣ� No�����ļ�������,��Ҫ�½�
	int key_flag = 0; //0�������ڣ�1����

	flag = Yes; //�ļ�Ĭ���Ǵ���

	//����ֻ����ʽ���ļ����������NULL��˵���ļ������ڣ������ڣ����½�
	fp = fopen(path, "r");
	if (NULL == fp)
	{
		fp = fopen(path, "w");
		if (NULL == fp)
		{
			perror("fopen err");
			return -1;
		}
		flag = No; //˵���ļ����½���
	}

	if (No == flag)
	{//�ļ����½���, û���κ�����
		fprintf(fp, "%s = %s\n", key, value);
		goto END;
	}

	//������ִ�е��⣬˵���ļ�ԭ���ʹ��ڣ������½���
	//��Ҫ�ж�key�Ƿ���ڣ�������ڣ����ļ������key�����ڣ�׷���ڴ�
	fseek(fp, 0, SEEK_END); //����ƶ�����β
	long size = ftell(fp);
	if (size >= MAX)
	{
		ret = -2;
		goto END;
	}

	rewind(fp); //����ƶ�����ͷ

	tmp = (char *)calloc(MAX+10, 1);
	if (NULL == tmp)
	{
		ret = -3;
		goto END;
	}

	char buf[4 * 1024];
	char tmp_key[128];
	int ret2;
	while (1)
	{
		fgets(buf, sizeof(buf), fp);
		if (feof(fp))
		{
			break;
		}

		sscanf(buf, "%[^=]", tmp_key);
		ret2 = trim_str(tmp_key);
		if (ret2 != 0)
		{
			ret = -4;
			goto END;
		}
		//printf("tmp_key = #%s#\n", tmp_key);
		if (strcmp(tmp_key, key) == 0)
		{//keyֵ����
			sprintf(buf, "%s = %s\n", key, value);
			key_flag = 1;
		}
	
		strcat(tmp, buf);
	}

	if (0 == key_flag) //keyֵ������
	{
		sprintf(buf, "%s = %s\n", key, value);
		strcat(tmp, buf);
	}

	//printf("tmp  = %s\n", tmp);
	//�ر��ļ�����ֻд��ʽ���ļ���Ŀ��Ϊ������ļ�
	fclose(fp);
	fp = fopen(path, "w");
	if (NULL == fp)
	{
		perror("fopen err");
		return -1;
	}

	fputs(tmp, fp);

END:
	if (NULL != fp)
	{
		fclose(fp);
	}

	if (NULL != tmp)
	{
		free(tmp);
	}

	return ret;
}

int read_cfg(char *path, char *key, char *value) //�������ļ�
{
	FILE *fp = NULL;
	int flag = 0; //0����key�����ڣ� 1�������

	fp = fopen(path, "r"); //ֻд��ʽ
	if (NULL == fp)
	{
		perror("fopen err");
		return -1;
	}


	char buf[1024];
	char tmp[256];
	while (1)
	{
		fgets(buf, sizeof(buf), fp);
		if (feof(fp))
		{
			break;
		}

		sscanf(buf, "%[^=]", tmp);		//��Ҫ��ȡkeyֵ
		trim_str(tmp); //ȥ���ߵĿո�

		if (strcmp(tmp, key) == 0)
		{//�����key
			//��ȡ=���ұߵ�����
			sscanf(buf, "%*[^=]=%s", tmp);
			trim_str(tmp); //ȥ���ߵĿո�
			strcpy(value, tmp);

			flag = 1;
			break;
		}
	}

	fclose(fp);

	if (flag == 0)
	{
		printf("%s������\n", key);
		return -2;
	}

	return 0;
}