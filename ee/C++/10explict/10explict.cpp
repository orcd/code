#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	
	//explicitֻ��д�ڹ��캯��ǰ�棬�����βΣ���ڶ����β���Ĭ��ֵ
	explicit Maker(int a)
	{

	}
	Maker(const Maker &maker){}

};

void test()
{
	//Maker maker = 10;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

