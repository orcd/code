#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include"test.h"
using namespace std;


//定义一个命名空间 namespace --关键字 GF是自己取的名字
namespace GF{
	int a=10;
	int b=20;
	void func()
	{
		cout << "hello func" << endl;
	}
}

//注意点1：必须在全局范围写

void test01()
{
	GF::func();
	//cout << GF::c << endl;报错
	/*namespace GF1{
		int a = 10;
		int b = 20;
		void func()
		{
			cout << "hello func" << endl;
		}
	}*/
}

//2，命名空间可以嵌套命名空间
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

//3.命名空间是开发的
namespace GF{
	int c = 50;
}
void test03()
{
	cout << GF::c << endl;
}

//匿名空间
namespace{
	
}

//给命名空间取别名
void test04()
{
	//       新名字
	namespace newGF = GF;

	newGF::func();
}
//分文件的命名空间使用
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

