#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.����û��ṩ�вι��죬��ô�����������ṩĬ�ϵĹ��캯��,
//���ǻ��ṩĬ�ϵĿ������캯��
//2.����û��ṩ�˿������캯������ô�������������ṩ�κι��캯��
class Maker{
public:

	/*Maker(int age)
	{
		Age = age;
	}*/

	Maker(const Maker &maker)
	{

	}

private:
	int Age;
};

void test()
{
	/*Maker maker3;
	Maker maker(10);
	Maker maker2(maker);*/
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

