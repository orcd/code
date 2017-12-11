#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//1.可以细微划分权限，如只读只写
class Maker{
public:
	string getName()//只读
	{
		return Name;
	}
	void setAge(int val)//写
	{
		if (val>0)//确保数据的合理性
		{
			Age = val;
		}
		
	}
	int getAge()//读
	{
		return Age;
	}
	void setId(int id)//写
	{
		Id = id;
	}

private:
	string Name;//只读
	int Age;//读写
	int Id;//只写
};

void test()
{
	Maker maker;
	maker.setAge(20);
	cout<<"Age:"<<maker.getAge() << endl;

	maker.setId(10);
}
//2.保证客户端访问成员的一致性
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

