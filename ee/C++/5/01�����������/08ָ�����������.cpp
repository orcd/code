#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker()
	{
		cout << "构造函数" << endl;
	}
	void printMaker()
	{
		cout << "hello Maker" << endl;
	}
	~Maker()
	{
		cout << "析构函数" << endl;
	}
};
//管理指针的类
class SmartPointer{
public:
	SmartPointer(Maker *maker)
	{
		this->maker = maker;
	}

	//重载指针运算符
	Maker *operator->()
	{
		return this->maker;
	}

	~SmartPointer()
	{
		if (this->maker != NULL)
		{
			delete this->maker;
			this->maker = NULL;
		}
	}

private:

	Maker *maker;
};

void test()
{
	Maker *pm = new Maker;

	pm->printMaker();

	SmartPointer sp(pm);

	sp->printMaker();

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

