#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ֵ����
void func1(int a,int b)
{
	int temp = a;
	a = b;
	b = temp;
}
//ָ�봫��
void func2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
//���ô���
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

	func1(a, b);//���ܸı�ʵ��
	printfunc(a, b);

	func2(&a, &b);
	printfunc(a, b);

	/*func3(a, b);
	printfunc(a, b);*/


	system("pause");
	return EXIT_SUCCESS;
}

