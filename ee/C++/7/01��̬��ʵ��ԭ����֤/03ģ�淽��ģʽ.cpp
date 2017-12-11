#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Drink{
public:
	virtual void Boil() = 0;//���麯��
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void AddSometing() = 0;

	//ȷ�������ĵ���˳��ģ�淽ʽ
	void Make()
	{
		 Boil();
		 Brew();
		 PourInCup();
		 AddSometing();

		 //�����鸳ֵ
		 //��ӡ��������
		 //������
		 //��ӡ��������

	}


};

class Coffee :public Drink{
public:

	virtual void Boil()//���麯��
	{
		cout << "���¶ˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void PourInCup()
	{
		cout << "�������" << endl;
	}
	virtual void AddSometing()
	{
		cout << "�ӵ�����" << endl;
	}


};

class Tea :public Drink{
public:
	virtual void Boil()//���麯��
	{
		cout << "���Ȫˮ" << endl;
	}
	virtual void Brew()
	{
		cout << "���ݲ�" << endl;
	}
	virtual void PourInCup()
	{
		cout << "��������" << endl;
	}
	virtual void AddSometing()
	{
		cout << "�ӵ��ĩ" << endl;
	}


};

void test()
{
	Drink *drink = NULL;
	drink = new Coffee;

	drink->Make();

	delete drink;

	cout << "-------------" << endl;
	drink = new Tea;
	drink->Make();

	delete drink;


}




int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

