#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Maker{
	//�������������Maker��ĺ�����
	friend void GoodGay(Maker &maker);//��������
public:
	Maker()
	{
		SittingRoom = "����";
		mBedRoom = "����";
	}

public:
	string SittingRoom;//����
private:
	string mBedRoom;//����

};

void GoodGay(Maker &maker)
{
	cout << "�û��ѷ��ʣ�" << maker.SittingRoom << endl;
	cout << "�û��ѷ��ʣ�" << maker.mBedRoom << endl;
}

void test()
{
	Maker maker;
	GoodGay(maker);
}

int main()
{
	test();

	system("pause");
	return EXIT_SUCCESS;
}

