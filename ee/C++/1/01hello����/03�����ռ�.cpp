#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"test.h"
using namespace std;


//����һ�������ռ� namespace --�ؼ��� GF���Լ�ȡ������
namespace GF{
	int a=10;
	int b=20;
	void func()
	{
		cout << "hello func" << endl;
	}
}

//ע���1��������ȫ�ַ�Χд

void test01()
{
	GF::func();
	//cout << GF::c << endl;����
	/*namespace GF1{
		int a = 10;
		int b = 20;
		void func()
		{
			cout << "hello func" << endl;
		}
	}*/
}

//2�������ռ����Ƕ�������ռ�
namespace GF1{
	int a = 10;
	int b = 20;
	namespace GF2{
		int a = 30;
		int b = 40;
	}
}

void test02()
{
	cout << "GF1::a" << GF1::a << endl;
	cout << GF1::GF2::a << endl;
}

//3.�����ռ��ǿ�����
namespace GF{
	int c = 50;
}
void test03()
{
	cout << GF::c << endl;
}

//�����ռ�
namespace{
	
}

//�������ռ�ȡ����
void test04()
{
	//       ������
	namespace newGF = GF;

	newGF::func();
}
//���ļ��������ռ�ʹ��
void test05()
{
	B::func1();
}

int main()
{
	//test01();
	test05();
	myNULL();
	/*cout << "gf::a=" << GF::a << endl;

	cout << "hello" << endl;*/
	system("pause");
	return EXIT_SUCCESS;
}

