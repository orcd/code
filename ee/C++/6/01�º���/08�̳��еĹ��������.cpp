#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	/*Father()
	{
		cout << "Father����" << endl;
		mA = 0;
		mB = 0;
	}*/
	Father(int a, int b)
	{
		cout << "Father int a,int b����" << endl;
		mA = a;
		mB = b;
	}
	~Father()
	{
		cout << "Father����" << endl;
	}

public:
	int mA;
	int mB;

};


class Son :public Father{
public:
	Son(int a,int b):Father(a,b)
	{
		cout << "Son����" << endl;
	}

	~Son()
	{
		cout << "Son����" << endl;
	}
public:
	int mSon;
	int mSon2;
};

//�ȵ��ø���Ĺ��죬Ȼ���������Ĺ��죬��������˳���෴
//

void test01()
{
	Son son(10,20);
}
class E{
public:
	E()
	{
		cout << "E�Ĺ���" << endl;
	}

	~E()
	{
		cout << "E������" << endl;
	}

};

class A{
public:
	A()
	{
		cout << "A�Ĺ���" << endl;
	}

	~A()
	{
		cout << "A������" << endl;
	}

	E e;

};



class C{
public:
	C()
	{
		cout << "C�Ĺ���" << endl;
	}

	~C()
	{
		cout << "C������" << endl;
	}

};
class D{
public:
	D()
	{
		cout << "D�Ĺ���" << endl;
	}

	~D()
	{
		cout << "D������" << endl;
	}

};

class B:public A{
public:
	B()
	{
		cout << "B�Ĺ���" << endl;
	}

	~B()
	{
		cout << "B������" << endl;
	}

	
	D d;
	C c;
};

void test02()
{
	B b;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

