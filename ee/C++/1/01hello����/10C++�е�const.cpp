#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//const int a = 10;//���ڴ棬

void test01()
{
	//int *p = (int *)&a
	//*p = 300;//�����޸�

	//cout << "a=" << a << endl;
	
	volatile const int b = 100;

	int *p = (int *)&b;

	*p = 300;

	//cout << "a=" << 100 << endl;//�����۵�
	//cout << "b=" << b << endl;//��ӡ100


	extern const int cc;
	cout << "c=" << cc << endl;//const���ε�ȫ�ֱ��������ڲ���������
	//���ȷʵҪʹ�ã��ڶ���const int c=200��ǰ�����extern

}

void test02()
{
	//1.�����������Ż�
	int a = 10;
	const int b = a;

	int *p = (int *)&b;
	*p = 200;

	cout << "b=" << b << endl;
}

//�Զ����������Ͳ��ᷢ�������۵�
struct Maker{//�Զ�����������
	Maker()//���캯��
	{
		name = "���";
		age = 20;
	}
	int age;
	string name;


};

void test03()
{
	const Maker maker;//const int maker

	cout << "Name:" << maker.name << "Age:" << maker.age << endl;

	Maker *p = (Maker *)&maker;

	p->name = "������";
	p->age = 30;

	cout << "Name:" << maker.name << "Age:" << maker.age << endl;


}

//const int e = 10;//û���ڴ�
//
//void test04()
//{
//	cout << "e=" << 10 << endl;
//}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	system("pause");
	return EXIT_SUCCESS;
}

