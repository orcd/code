#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;



class BMW{
public:
	BMW(int a)
	{
		cout << " a BMW ����" << endl;
	}

	~BMW()
	{
		cout << "BMW ����" << endl;
	}
};

class Trator{
public:
	Trator(int b,int c)
	{
		cout << "Trator ����" << endl;
	}
	~Trator()
	{
		cout << "Trator ����" << endl;
	}
};

//��������ʱ���ȵ�����ĳ�Ա����Ĺ��캯����Ȼ���ڵ����Լ��Ĺ��캯����������������˳��֮
//���ó�Ա����Ĺ��캯��ʱ���ͳ�Ա�����˳���й�

class Maker{
public:
	//Maker() :b(10),t(20,30)//��ʶ���б�
	//{
	//	cout << "Maker ����" << endl;
	//}

	Maker(int a,int b,int c) :b(a), t(b, c)//��ʶ���б�
	{
		cout << "Maker ����" << endl;
	}

	~Maker()
	{
		cout << "Maker ����" << endl;
	}

private:
	
	BMW b;
	Trator t;//��������ĳ�Ա

};

void test01()
{
	Maker maker(10,20,30);
}

//��ʼ���б�����ʲô
//����ȷ����Ա��������ࣨʵ������Ա������ࣩ���ĸ����캯��

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

