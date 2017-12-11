#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//C++中的结构体比C语言加强了，可以在结构体里放函数（方法）
struct Maker{
	int a;
	int b;
	void func();
};

void test()
{
	//C++用结构体定义变量时，可以不需要struct
	 Maker maker;
	 //maker.a;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

