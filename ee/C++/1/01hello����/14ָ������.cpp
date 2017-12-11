#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


void alloc(char *&temp)
{
	temp = (char *)malloc(64);
	if (NULL == temp)
	{
		return;
	}
	memset(temp, 0, 64);

	strcpy(temp, "hello");
}

void freeSpace(char *&temp)
{
	if (NULL == temp)
	{
		return;
	}

	free(temp);

	temp = NULL;//要置空，不然会有野指针
}

void test()
{
	char *p = NULL;
	alloc(p);
	cout << "p:" << p << endl;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

