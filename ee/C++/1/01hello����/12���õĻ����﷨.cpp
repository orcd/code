#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test01()
{
	int a = 10;

	//int *p = &a;
	int &p = a;//��a�ռ�ȡ�˱�����p
	int &b = a;

	p = 200;

	cout << "a=" << a << endl;
	cout << "p=" << p  << endl;
	cout << "b=" << b << endl;

	b = 300;
	cout << "a=" << a << endl;//300
	cout << "p=" << p << endl;//300
	cout << "b=" << b << endl;//300

	cout << "---------------" << endl;

	cout << "a:" << &a << endl;
	cout << "p:" << &p << endl;
	cout << "b:" << &b << endl;


}

//���ñ���������ʱ��ʼ��
void test02()
{
	
	//int &a;���������ʼ�� ---1



}

void test03()
{
	int a = 10;
	int &p = a;

	int c = 20;
	//&p = c;���������ٴ��޸����� ---2


	//������NULL���� ---3
	//int &d = NULL;


	//4�������ǺϷ����ڴ�ռ�----4
}

void test04()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	//1.
	typedef int(ARR_TYPE)[6];//������������

	//������
	/*
	int arr=20;
	int &arrytpe=arr;
	*/
	ARR_TYPE &arrytpe = arr;

	//2.
	int(&arrtype2)[6] = arr;

	//3.
	typedef int(&ARR_TYPE2)[6];

	ARR_TYPE2 arrype3 = arr;


	for (int i = 0; i < 6; i++)
	{
		arrype3[i] = i + 100;
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	//test01();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}

