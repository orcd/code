#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//1.��̬��Ա������������������������������������
//2.��̬��Ա�������������������������ʼ��
//3.��̬��Ա���������࣬�����ڶ��������ж�����
//4.��̬��Ա�����������������ʣ�Ҳ�����ö���������
//5.��̬��Ա����Ҳ��Ȩ�ޣ����˽�л��������ǲ��ܷ���
//6.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա���������ܷ�����ͨ��Ա����
//7.const���εľ�̬��Ա������������ڳ�ʼ��
class Maker{
public:
	static int a;//��̬��Ա����
	//static int b = 20;���ڲ��ܳ�ʼ��

	int d;
	static void func()
	{
		//d;//���ܷ�����ͨ��Ա����
		a;//���Է��ʾ�̬��Ա����
	}
	const static int e = 20;//const���εľ�̬��Ա������������ʼ��
	const static int f;
private:
	static int c;
};

int Maker::a = 10;//�����ʼ��

const int Maker::f = 20;

void test01()
{
	//a = 10;��̬��Ա������������������

	cout << Maker::a << endl;
	Maker maker;
	cout << maker.a << endl;

	//maker.c;˽�г�Ա���ⲻ�ܷ���
	//Maker::c;


}

int main()
{
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

