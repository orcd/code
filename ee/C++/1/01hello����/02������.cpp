#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int a = 10;//ȫ����
//���������������������ȫ�ֱ����;ֲ�����
int main()
{
	int a = 20;//�C
	//�ͽ�ԭ��
	cout << "a=" << a << endl;

	cout << "::a=" << ::a << endl;
	system("pause");
	return EXIT_SUCCESS;
}

