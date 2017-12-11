#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//引用让语法更简洁
void func(int *ref)
{
	cout << *ref << endl;
}

void func2(int &ref)
{
	cout << ref << endl;//2.省了*
}
void test()
{
	int a = 10;
	func(&a);

	func2(a);//1.省了&
}



int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

