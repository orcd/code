#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{};
//1.һ������Ĵ�С��1���ֽ�
void test01()
{
	Maker *p = new Maker[10];
	cout << sizeof(Maker) << endl;

}

//2.��ͨ��Ա������ռ����Ĵ�С,��ռ�ö���Ĵ�С
class Maker1{
public:
	void func()
	{

	}
};

void test02()
{
	cout << sizeof(Maker1) << endl;
	Maker1 maker;
	cout << sizeof(maker) << endl;
}

//3.��̬��Ա������ռ����Ĵ�С,��ռ�ö���Ĵ�С
class Maker2{
public:
	static void func()
	{

	}
};
void test03()
{
	cout << sizeof(Maker2) << endl;
	Maker2 maker;
	cout << sizeof(maker) << endl;
}

//4.��̬��Ա������ռ����Ĵ�С,��ռ�ö���Ĵ�С
class Maker3{
public:
	static int a;
};
int Maker3::a = 10;
void test04()
{
	cout << sizeof(Maker3) << endl;
	Maker3 maker;
	cout << sizeof(maker) << endl;
}

//5.��ͨ��Ա����ռ����Ĵ�С,ռ�ö���Ĵ�С
class Maker4{
public:
	int a;
};
void test05()
{
	cout << sizeof(Maker4) << endl;
	Maker4 maker;
	cout << sizeof(maker) << endl;
}

//���ۣ�C++���еĺ����ͱ����Ƿֿ��洢

void test06()
{
	Maker1 maker1;
	Maker1 maker2;
	maker1.func();
	maker2.func();
}
int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	system("pause");
	return EXIT_SUCCESS;
}

