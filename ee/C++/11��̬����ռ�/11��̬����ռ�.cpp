#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Maker{
public:
	Maker(int a)
	{
		cout << "�вι��캯��" << endl;
	}

	~Maker()
	{
		cout << "��������" << endl;
	}
};

void test()
{
	Maker *maker = (Maker*)malloc(sizeof(Maker));
	if (NULL == maker)
	{
		return;
	}


	free(maker);
}

void test01()
{

	Maker *maker = new Maker(20);
	//new������ڵ��ù��캯��֮ǰȷ���ڴ�����ɹ�
	//Maker *maker = new Maker(10);

	//delete���ڶ�������֮ǰ������������
	delete maker;
}

int main()
{
	//test();
	test01();
	system("pause");
	return EXIT_SUCCESS;
}

