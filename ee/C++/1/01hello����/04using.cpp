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
	//using声明可使得指定的标识符可用。
	using A::b;
	cout << A::a << endl;
	cout << A::a << endl;
	cout << b << endl;

	//int b = 30;

	//注意：局部变量b和命名空间中的b冲突
}

namespace B{
	int a = 10;
	int b = 20;
	int c = 30;
}
//using编译指令使整个命名空间标识符可用.
void test02()
{
	using namespace B;


	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	using namespace A;
	//因为上面的变量的作用域在B空间中
	int a = 30;//不会冲突
}


//iostream
 namespace std1
{
	 int std1_a = 10;
	 /*---代码-----*/
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

