#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//1.����ϸ΢����Ȩ�ޣ���ֻ��ֻд
class Maker{
public:
	string getName()//ֻ��
	{
		return Name;
	}
	void setAge(int val)//д
	{
		if (val>0)//ȷ�����ݵĺ�����
		{
			Age = val;
		}
		
	}
	int getAge()//��
	{
		return Age;
	}
	void setId(int id)//д
	{
		Id = id;
	}

private:
	string Name;//ֻ��
	int Age;//��д
	int Id;//ֻд
};

void test()
{
	Maker maker;
	maker.setAge(20);
	cout<<"Age:"<<maker.getAge() << endl;

	maker.setId(10);
}
//2.��֤�ͻ��˷��ʳ�Ա��һ����
class Maker2{
public:
	
	void func1()
	{
		cout << "func1" << endl;
	}
private:
	int func;
};

void test02()
{
	Maker2 maker2;
	maker2.func1();
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

