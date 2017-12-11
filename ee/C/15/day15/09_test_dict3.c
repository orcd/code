#include <string.h>
#include <time.h> 
#include <stdlib.h>
#include <stdio.h>

typedef struct Dict
{
	char *key; //单词
	char *content; //解释
}Dict;

//char buf[] = "mike\r\n     \t     ";
void trim_key(char *buf)//把单词后面的无用字符去掉
{
	int n = strlen(buf) -1;
	while( buf[n] == '\r' || buf[n] == '\t' || buf[n] == ' ' || buf[n] == '\n' )
	{
		--n;
	}

	buf[n+1] = '\0';
}

int get_dict_size(FILE *fp)
{
	char buf[4*1024];
	int i = 0;
	while(1)
	{
		fgets(buf, sizeof(buf), fp);
		fgets(buf, sizeof(buf), fp);

		if( feof(fp) )
		{
			break; //跳出循环
		}

		++i;
	}

	return i;
}

//返回值为单词个数
int init_dict(Dict ** p, char *path)
{
	FILE *fp = fopen(path, "rb");
	if(NULL == fp)
	{
		perror("fopen");
		return 0;
	}

	//获取文件单词个数
	int n = get_dict_size(fp);
	if(0 == n)
	{
		printf("get_dict_size n = 0\n");
		return 0;
	}

	//文件光标移动回开头
	rewind(fp);

	*p = (Dict *)malloc(n * sizeof(Dict));
	if(NULL == *p)
	{
		return 0;
	}

	memset(*p, 0, n * sizeof(Dict));

	char buf[4*1024];
	int i = 0;
	int len;
	while(1)
	{
		fgets(buf, sizeof(buf), fp); //读单词
		if( feof(fp) )
		{
			break; //跳出循环
		}

		len = strlen(buf);
		if(len > 0)
		{
			(*p)[i].key = (char *)malloc(len);
			memset((*p)[i].key, 0, len);
			trim_key(buf);//把单词后面的无用字符去掉
			strcpy( (*p)[i].key, buf+1);
		}

		fgets(buf, sizeof(buf), fp); //读解释
		if( feof(fp) )
		{
			break; //跳出循环
		}
		len = strlen(buf);
		if(len > 0)
		{
			(*p)[i].content = (char *)malloc(len);
			memset((*p)[i].content, 0, len);
			strcpy( (*p)[i].content, buf+6);
		}
	
		++i;
	}

	//把文件关闭
	fclose(fp);

	return i;
}

void clean_dict(Dict *p, int n)
{
	//先释放成员key, content
	int i;
	for(i = 0; i < n; ++i)
	{
		free(p[i].key);
		free(p[i].content);
	}
	
	//再释放p
	free(p);
	p = NULL;
}

int search_dict(Dict * p, int n, char *key, char *content)
{
	int i;
	for(i = 0; i < n; ++i)
	{
		if(strcmp( p[i].key, key ) == 0)
		{
			strcpy(content, p[i].content);
			return 0; //成功
		}
	}

	return -1; //没有此词汇
}

int main()
{
	Dict * p = NULL; //指针变量
	int n; //代表真正单词个数
	clock_t start, end;
	

	//所有内容都在堆区
	start = clock();
	n = init_dict( &p , "./dict.txt"); //地址传递
	end = clock();
	printf("n = %d\n", n);
	if(0 == n)
	{
		printf("n == 0, err\n");
		return -1;
	}
	printf("加载时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要

	start = clock();
	char key[1024] = "鼾声如雷";
	char content[2048];
	int ret = search_dict(p, n, key, content); //查询，成功为0，失败为-1
	if(0 == ret)
	{
		printf("%s ------》  %s\n", key, content);
	}
	else
	{
		printf("没有此词汇\n");
	}
	end = clock();
	printf("查询时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要


	start = clock();
	clean_dict( p, n); //释放堆区的内存
	p = NULL;
	end = clock();
	printf("清理时间： %lu ms\n", (end-start)/1000); //linux需要除以1000， windows不需要

	return 0;
}
