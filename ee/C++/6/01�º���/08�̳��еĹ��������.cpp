#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	/*Father()
	{
		cout << "Father构造" << endl;
		mA = 0;
		mB = 0;
	}*/
	Father(int a, int b)
	{
		cout << "Father int a,int b构造" << endl;
		mA = a;
		mB = b;
	}
	~Father()
	{
		cout << "Father析构" << endl;
	}

public:
	int mA;
	int mB;

};


class Son :public Father{
public:
	Son(int a,int b):Father(a,b)
	{
		cout << "Son构造" << endl;
	}

	~Son()
	{
		cout << "Son析构" << endl;
	}
public:
	int mSon;
	int mSon2;
};

//先调用父类的构造，然后调用子类的构造，析构调用顺序相反
//

void test01()
{
	Son son(10,20);
}
class E{
public:
	E()
	{
		cout << "E的构造" << endl;
	}

	~E()
	{
		cout << "E的析构" << endl;
	}

};

class A{
public:
	A()
	{
		cout << "A的构造" << endl;
	}

	~A()
	{
		cout << "A的析构" << endl;
	}

	E e;

};



class C{
public:
	C()
	{
		cout << "C的构造" << endl;
	}

	~C()
	{
		cout << "C的析构" << endl;
	}

};
class D{
public:
	D()
	{
		cout << "D的构造" << endl;
	}

	~D()
	{
		cout << "D的析构" << endl;
	}

};

class B:public A{
public:
	B()
	{
		cout << "B的构造" << endl;
	}

	~B()
	{
		cout << "B的析构" << endl;
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

