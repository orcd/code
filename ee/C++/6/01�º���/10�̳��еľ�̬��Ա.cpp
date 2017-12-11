#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Myclass{
public:
	static int mA;
};

int Myclass::mA = 100;


class Son :public Myclass{
public:
	static int mA;
};
int Son::mA = 200;

void test()
{

	
	cout << Son::mA << endl;

	cout << Son::Myclass::mA << endl;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

