#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

//void fucn()
//{
//	cout << "hello" << endl;
//}
using namespace std;

namespace A{
	int a = 10;
	int b = 20;
	int c = 30;
}

void test01()
{
	//using������ʹ��ָ���ı�ʶ�����á�
	using A::b;
	cout << A::a << endl;
	cout << A::a << endl;
	cout << b << endl;

	//int b = 30;

	//ע�⣺�ֲ�����b�������ռ��е�b��ͻ
}

namespace B{
	int a = 10;
	int b = 20;
	int c = 30;
}
//using����ָ��ʹ���������ռ��ʶ������.
void test02()
{
	using namespace B;


	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	using namespace A;
	//��Ϊ����ı�������������B�ռ���
	int a = 30;//�����ͻ
}


//iostream
 namespace std1
{
	 int std1_a = 10;
	 /*---����-----*/
}

 using namespace std1;
 void main1()
 {
	 cout << std1_a << endl;
 }


 namespace FUNC{
	 void func()
	 {
		 cout << "func" << endl;
	 }
	 void func(int a)
	 {
		 cout << "func int a" << endl;
	 }
	 void func(int a ,int b)
	 {
		 cout << "func int a ,int b" << endl;
	 }
 }

 void test03()
 {
	 FUNC::func(); 
	 FUNC::func(10);
	 FUNC::func(10,20);
 }


int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return EXIT_SUCCESS;
}

