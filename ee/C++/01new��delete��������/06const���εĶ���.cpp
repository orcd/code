#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker(int id, int age)
	{
		this->id = id;
		this->age = age;
		score = 100;
	}
	void func()
	{

	}
	void printMyClass()const//���γ�Ա���� ��Ҳ����������
	{
		//id = 30;//�����޸�
		score = 300;
		cout << "id:" << this->id << " Age:" << age << "score:" << score << endl;
	}

public:
	int id;
	int age;
	mutable int score;
};

void test()
{
	const Maker maker(1, 20);//1.������һ����ʼ�����ܸı䣬���ǿ��Լ���޸�
	
	//maker.id = 200;//2.���������޸���ͨ�ĳ�Ա����
	maker.score = 400;//3.�����޸�mutable���εĳ�Ա����
	//maker.func();//4.�������ܷ�����ͨ�ĳ�Ա����
	maker.printMyClass();//5.��������Է��ʳ�����
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

