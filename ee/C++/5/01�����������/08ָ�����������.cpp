#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker()
	{
		cout << "���캯��" << endl;
	}
	void printMaker()
	{
		cout << "hello Maker" << endl;
	}
	~Maker()
	{
		cout << "��������" << endl;
	}
};
//����ָ�����
class SmartPointer{
public:
	SmartPointer(Maker *maker)
	{
		this->maker = maker;
	}

	//����ָ�������
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

