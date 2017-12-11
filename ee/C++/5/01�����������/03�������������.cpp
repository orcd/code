#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int id)
	{
		this->id = id;
	}
public:
	int id;
};

int operator-(int val, Maker &m1)
{
	return val - m1.id;
}

Maker operator-(Maker &m1, Maker &m2)
{
	Maker tmep = m1.id - m2.id;

	return tmep;
}

void test01()
{
	Maker m1(10);
	int a = 20 - m1;
	cout << "a:" <<a<< endl;
	Maker m2(20);
	Maker m3 = m2 - m1;
}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

