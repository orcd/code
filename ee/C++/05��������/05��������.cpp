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
	Maker(const Maker &maker)//const���Բ��ӣ���&�����
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
	/*Maker maker;

	Maker maker2 = Maker();*/
	//�������󣬸õ����������ڵ�ǰ��
	Maker();

	cout << "��������" << endl;


	Maker maker;

	//Maker(maker);//�������������Maker maker; ����
}



int main()
{
	
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

