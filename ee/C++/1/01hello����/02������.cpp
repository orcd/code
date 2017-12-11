#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int a = 10;//全局区
//：：作用域运算符是区分全局变量和局部变量
int main()
{
	int a = 20;//桟
	//就近原则
	cout << "a=" << a << endl;

	cout << "::a=" << ::a << endl;
	system("pause");
	return EXIT_SUCCESS;
}

