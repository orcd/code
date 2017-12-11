#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"MyString.h"
using namespace std;

void test()
{
	MyString str1(10, 'a');
	cout << str1 << endl;

	MyString str2(3, 'b');
	cout << str2 << endl;

	MyString str3 = str1 + str2;
	cout << str3 << endl;
	cout << "-------------" << endl;
	MyString str4 = str3 + "hello";
	cout << str4 << endl;

	MyString str5(5, 'c');
	str4 += str5;
	cout << str4 << endl;

	str4 += "world";
	cout << str4 << endl;

	for (int i = 0; i < str4.Size(); i++)
	{
		cout << str4[i] << " ";
	}
	cout << endl;

	cin >> str4;
	cout << str4 << endl;

}

int main()
{
	test();

	
	system("pause");
	return EXIT_SUCCESS;
}

