#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

void test()
{
	int a = 10;
	int b = 20;

	printf("�ı�ǰ��%d\n", a>b ? a : b);

	(a < b ? a : b) = 30;
	printf("�ı��%d\n", a<b ? a : b);

	cout << "a=" << a << endl;
	cout << "b=" << b<< endl;

	//C++����Ŀ��������ص�����ֵ�����Ա���ֵ
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

