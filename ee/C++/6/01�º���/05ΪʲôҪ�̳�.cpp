#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//���� ������)
class Plane{
public:
	void func1()
	{
		cout << "���" << endl;
	}

	void func2()
	{
		cout << "����" << endl;
	}

	void func3()
	{
		cout << "��ɽ���" << endl;
	}

};

//�����ࣨ����)
class warpPlane:public Plane{
public:

	void warfunc1()
	{
		cout << "�����ӵ�" << endl;
	}
	void warfunc2()
	{
		cout << "���䵼��" << endl;
	}
	void warfunc3()
	{
		cout << "���ٷ���" << endl;
	}

};

//�����ࣨ����)
class MakerPlane :public Plane{
public:

	void Makerfunc1()
	{
		cout << "Maker�����ӵ�" << endl;
	}
	void Makerfunc2()
	{
		cout << "Maker���䵼��" << endl;
	}
	void Makerfunc3()
	{
		cout << "Maker���ٷ���" << endl;
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

