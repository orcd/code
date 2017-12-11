#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "deal_str.h"
#define MAX 1024*1024*2  //2M

int write_cfg(char *path, char *key, char *value)//写配置文件
{
	int ret = 0;
	FILE *fp = NULL;
	char *tmp = NULL;
	enum Status{Yes, No}flag; //Yes代表文件存在， No代表文件不存在,需要新建
	int key_flag = 0; //0代表不存在，1存在

	flag = Yes; //文件默认是存在

	//先以只读方式打开文件，如果返回NULL，说明文件不存在，不存在，再新建
	fp = fopen(path, "r");
	if (NULL == fp)
	{
		fp = fopen(path, "w");
		if (NULL == fp)
		{
			perror("fopen err");
			return -1;
		}
		flag = No; //说明文件是新建的
	}

	if (No == flag)
	{//文件是新建的, 没有任何内容
		fprintf(fp, "%s = %s\n", key, value);
		goto END;
	}

	//程序能执行到这，说明文件原来就存在，不是新建的
	//需要判断key是否存在，如果存在，改文件，如果key不存在，追加内存
	fseek(fp, 0, SEEK_END); //光标移动到结尾
	long size = ftell(fp);
	if (size >= MAX)
	{
		ret = -2;
		goto END;
	}

	rewind(fp); //光标移动到开头

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
		{//key值存在
			sprintf(buf, "%s = %s\n", key, value);
			key_flag = 1;
		}
	
		strcat(tmp, buf);
	}

	if (0 == key_flag) //key值不存在
	{
		sprintf(buf, "%s = %s\n", key, value);
		strcat(tmp, buf);
	}

	//printf("tmp  = %s\n", tmp);
	//关闭文件，以只写方式打开文件，目的为了清空文件
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

int read_cfg(char *path, char *key, char *value) //读配置文件
{
	FILE *fp = NULL;
	int flag = 0; //0代表key不存在， 1代表存在

	fp = fopen(path, "r"); //只写方式
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

		sscanf(buf, "%[^=]", tmp);		//需要提取key值
		trim_str(tmp); //去两边的空格

		if (strcmp(tmp, key) == 0)
		{//是这个key
			//提取=后右边的内容
			sscanf(buf, "%*[^=]=%s", tmp);
			trim_str(tmp); //去两边的空格
			strcpy(value, tmp);

			flag = 1;
			break;
		}
	}

	fclose(fp);

	if (flag == 0)
	{
		printf("%s不存在\n", key);
		return -2;
	}

	return 0;
}