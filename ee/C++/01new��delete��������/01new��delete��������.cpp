#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.new������������

void test()
{
	//int *pInt = new int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//����������д
	int *pInt = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pInt[i] = i + 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "pint[]:" << pInt[i] << " " << endl;
	}

	char *Pchar = new char[64];
	memset(Pchar, 0, 64);
	strcpy(Pchar, "hello world");
	cout << Pchar << endl;

	delete[] pInt;//newʱ��[]��deleteҲҪ��
	delete[] Pchar;

}

//��̬��������
class Maker{
public:
	Maker()
	{
		cout << "�޲ι���" << endl;
	}
	Maker(int a)
	{
		cout << "�вι���" << endl;
	}
	~Maker()
	{
		cout << "��������" << endl;
	}
};

void test02()
{
	Maker *p = new Maker[2];//��������ʱ�����޲ι���

	delete[] p;

	//Maker *p2 = new Maker[2]{Maker(10), Maker(20)};
}

void test03()
{
	//void *p = new Maker;
	Maker *p = new Maker;
	delete p;//û�е�����������
}

void test04()
{
	//Maker *p = new Maker[2];
	//delete p;//�ᵵ


	/*int *pInt = new int[10];
	for (int i = 0; i < 10; i++)
	{
		pInt[i] = i + 10;
	}

	delete pInt;*/
}


int main()
{
	//test();
	//test03();
	//test04();
	system("pause");
	return EXIT_SUCCESS;
}

