#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Father1{
public:
	Father1()
	{
		BMW = "����";
	}
public:
	string BMW;
};

class Father2{
public:
	Father2()
	{
		BMW = "����";
	}
	
public:
	string BMW;
};

//��̳�
class Son :public Father1, public Father2{
public:
	Son()
	{
		POSC = "��ʱ��";
	}
public:
	string POSC;
};

void test()
{
	Son son;
	//son.BMW;//�����ж�����
	cout << "son.Father1::BMW" << son.Father1::BMW << endl;
	cout << "son.Father2::BMW" << son.Father2::BMW << endl;
	
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

