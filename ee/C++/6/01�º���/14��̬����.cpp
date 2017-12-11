#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//多态实现的三大条件：有继承，有重写父类的虚函数，父类指针指向子类对象
class rule{
public:
	
	//实现加法
	virtual int getRsult(int a, int b)//虚函数
	{
		return 0;
	}
};

class ADD2 :public rule{
public:
	virtual int getRsult(int a, int b)
	{
		cout << "我是新手" << endl;
		return a + b;
	}
};

class plus_rule :public rule{
public:
	virtual int getRsult(int a, int b)//虚函数,子类virtual可加可不加，建议加上
	{
		return a+b;
	}
};

class mins_rule :public rule{
public:
	virtual int getRsult(int a, int b)//虚函数,子类virtual可加可不加，建议加上
	{
		return a - b;
	}
};

class cutom_rule :public rule{
public:
	virtual int getRsult(int a, int b)//虚函数,子类virtual可加可不加，建议加上
	{
		return (a+b)*10-30;
	}
};

class add_rule :public rule{
public:
	virtual int getRsult(int a, int b)//虚函数
	{
		return a+b-a;
	}
};


//业务层
int func(rule *cal)
{
	int a = 20;
	int b = 30;

	int ret = cal->getRsult(a, b);

	return ret;
}


void test()
{
	rule *rul = NULL;

	rul = new plus_rule;
	cout << func(rul) << endl;
	delete rul;

	rul = new mins_rule;
	cout << func(rul) << endl;
	delete rul;



	rul = new cutom_rule;
	cout << func(rul) << endl;
	delete rul;

	rul = new add_rule;
	cout << func(rul) << endl;
	delete rul;


	rul = new ADD2;
	cout << func(rul) << endl;
	delete rul;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

