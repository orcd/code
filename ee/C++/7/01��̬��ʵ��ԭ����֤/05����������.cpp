#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//����������Ϊ�˽�������ָ��ָ���������ʱ�����ø���ָ��ɾ���������

class Animal{
public:
	Animal()
	{
		cout << "Animal����" << endl;
	}

	//virtual ~Animal()//����������
	//{
	//	cout << "Animal����" << endl;
	//}

	virtual void speak()
	{
		cout << "Animal speak()" << endl;
	}

	virtual ~Animal() = 0;//������������
	//����������������������ʵ��
};
//�������������������������������д����������������Ϊ�����࣬����ʵ��������

Animal:: ~Animal()
{
	cout << "������������" << endl;
}

class Cat :public Animal{
public:
	Cat()
	{
		cout << "Cat�Ĺ���" << endl;

		pName = new char[64];
		memset(pName, 0, 64);
		strcpy(pName, "С��");
	}
	virtual void speak()
	{
		cout << "Cat" <<this->pName<<"speak"<< endl;
	}

	~Cat()
	{
		cout << "cat����" << endl;

		if (this->pName != NULL)
		{
			delete[] this->pName;
			this->pName = NULL;
		}
	}

public:
	char *pName;
};

void test()
{
	Animal *animal = new Cat;

	animal->speak();

	//Animal a;

	delete animal;
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

