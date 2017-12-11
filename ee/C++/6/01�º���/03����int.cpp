#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int a)
	{

	}
public:
	operator int()
	{
		cout << "µôÓÃÁËÎÒ" << endl;
		return 10;
	}
};

void test()
{
	Maker maker = 10;//Maker maker =Maker maker(10)
	int a = (int)maker;
	


	cout << "a:" << a << endl;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

