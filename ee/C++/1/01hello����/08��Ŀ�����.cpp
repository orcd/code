#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test()
{
	int a = 10;
	int b = 20;

	printf("改变前：%d\n", a>b ? a : b);

	(a < b ? a : b) = 30;
	printf("改变后：%d\n", a<b ? a : b);

	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;

	//C++中三目运算符返回的是左值，可以被赋值
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

