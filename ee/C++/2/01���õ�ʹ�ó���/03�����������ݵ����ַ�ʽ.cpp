#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//值传递
void func1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//指针传递
void func2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//引用传递
void func3(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void printfunc(int &a,int &b)
{
	cout << "a=" << a << " b=" << b << endl;
}

int main()
{

	int a = 10;
	int b = 20;

	func1(a, b);//不能改变实参
	printfunc(a, b);

	func2(&a, &b);
	printfunc(a, b);

	/*func3(a, b);
	printfunc(a, b);*/


	system("pause");
	return EXIT_SUCCESS;
}

