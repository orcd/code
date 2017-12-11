#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//基类 （父类)
class Plane{
public:
	void func1()
	{
		cout << "会飞" << endl;
	}

	void func2()
	{
		cout << "载人" << endl;
	}

	void func3()
	{
		cout << "起飞降落" << endl;
	}

};

//派生类（子类)
class warpPlane:public Plane{
public:

	void warfunc1()
	{
		cout << "发射子弹" << endl;
	}
	void warfunc2()
	{
		cout << "发射导弹" << endl;
	}
	void warfunc3()
	{
		cout << "高速飞行" << endl;
	}

};

//派生类（子类)
class MakerPlane :public Plane{
public:

	void Makerfunc1()
	{
		cout << "Maker发射子弹" << endl;
	}
	void Makerfunc2()
	{
		cout << "Maker发射导弹" << endl;
	}
	void Makerfunc3()
	{
		cout << "Maker高速飞行" << endl;
	}

};

int main()
{
	warpPlane war;
	war.func1();
	war.warfunc1();


	system("pause");
	return EXIT_SUCCESS;
}

