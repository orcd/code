#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:

	//�޲�
	Maker()
	{
		cout << "�޲ι���" << endl;
		m = 100;
	}
	Maker(int M)
	{
		cout << "�вι���" << endl;
		m = M;
	}
	Maker(const Maker &maker)
	{
		m = maker.m;
		cout << "��������" << endl;
	}
	~Maker()
	{
		cout << "��������" << endl;
	}



private:
	int m;
};


void test01()
{
	//ʵ��������
	Maker maker;

	Maker maker2(maker);

}

void test02()
{
	Maker maker1(10);//�����в�,���÷���
	Maker maker11(maker1);//���ÿ������죬���÷���

	Maker maker2 = 10;//Maker maker2 =Maker(10),�����в�

	Maker maker3 = Maker(maker2);//��һ�ο�������
	Maker maker4 = Maker(10);//�����вι���

	//Maker maker5();//��������

	//int maker6();//��������
}
void test03()
{
	Maker maker = 10;//�����в�

	Maker maker2;
	maker2 = maker;//�����ù��캯��
}

int main()
{
	//test01();
	//test02();
	test03();
	cout << "-----" << endl;
	system("pause");
	return EXIT_SUCCESS;
}

