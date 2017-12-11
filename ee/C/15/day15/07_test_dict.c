#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX 3

// hello, 你好
// mike, 山炮
// ok，可以

typedef struct Dict
{
	char *key; //单词
	char *content; //解释
}Dict;

void init_dict(Dict ** p)
{
	*p = (Dict *)malloc(MAX * sizeof(Dict));
	memset(*p, 0, MAX * sizeof(Dict));

	//第0个单词
	(*p)[0].key = (char *)malloc(strlen("hello") + 1);
	memset((*p)[0].key, 0, strlen("hello")+1);
	strcpy( (*p)[0].key, "hello");

	(*p)[0].content = (char *)malloc(strlen("你好") + 1);
	memset((*p)[0].content, 0, strlen("你好")+1);
	strcpy( (*p)[0].content, "你好");

	//第1个单词
	(*p)[1].key = (char *)malloc(strlen("mike") + 1);
	memset((*p)[1].key, 0, strlen("mike")+1);
	strcpy( (*p)[1].key, "mike");

	(*p)[1].content = (char *)malloc(strlen("山炮") + 1);
	memset((*p)[1].content, 0, strlen("山炮")+1);
	strcpy( (*p)[1].content, "山炮");

	//第2个单词
	(*p)[2].key = (char *)malloc(strlen("ok") + 1);
	memset((*p)[2].key, 0, strlen("ok")+1);
	strcpy( (*p)[2].key, "ok");

	(*p)[2].content = (char *)malloc(strlen("可以") + 1);
	memset((*p)[2].content, 0, strlen("可以")+1);
	strcpy( (*p)[2].content, "可以");
}

void clean_dict(Dict *p)
{
	//先释放成员key, content
	int i;
	for(i = 0; i < MAX; ++i)
	{
		free(p[i].key);
		free(p[i].content);
	}
	
	//再释放p
	free(p);
	p = NULL;
}

int search_dict(Dict * p, char *key, char *content)
{
	int i;
	for(i = 0; i < MAX; ++i)
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

	//所有内容都在堆区
	init_dict( &p ); //地址传递

	char key[1024] = "hehehe";
	char content[2048];
	int ret = search_dict(p, key, content); //查询，成功为0，失败为-1
	if(0 == ret)
	{
		printf("%s ------》  %s\n", key, content);
	}
	else
	{
		printf("没有此词汇\n");
	}

	clean_dict( p ); //释放堆区的内存
	p = NULL;


	return 0;
}
