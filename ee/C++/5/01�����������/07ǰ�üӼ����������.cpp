#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Maker{
	friend ostream &operator<<(ostream &out, Maker &m);
public:
	Maker(int val)
	{
		this->id = val;
	}
	//前置++
	Maker &operator++()
	{
		++id;
		return *this;
	}
	//后置++
	Maker operator++(int)//占位参数,只能是int类型
	{
		//先返回，再++
		Maker temp(*this);//这里调用了拷贝构造去赋值temp里的id
		++id;//这里++的是this指针指向的变量
		return temp;
	}
	 

private:
	int id;
};

ostream &operator<<(ostream &out, Maker &m)
{
	cout << "ID:" << m.id << endl;
	return out;
}

void test()
{
	Maker m(10);
	cout << ++m << endl;
	//cout << (m++)++ << endl;//错误写法
	cout << m++ << endl;

	


}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

