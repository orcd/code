#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�������﷨�����
void func(int *ref)
{
	cout << *ref << endl;
}

void func2(int &ref)
{
	cout << ref << endl;//2.ʡ��*
}
void test()
{
	int a = 10;
	func(&a);

	func2(a);//1.ʡ��&
}



int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

