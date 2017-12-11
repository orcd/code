#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//1.构造函数必须公有
class Maker{
public:
	//有参构造
	Maker(int a)//构造函数，没有返回值,可以有参数,可以重载
	{
		name = "短笛";
		age = a;
		cout << "有参构造" << endl;
	}
	
	Maker()//无参构造，也是默认构造函数
	{
		name = "悟空";
		age = 20;

		/*Name =(char *) malloc(64);*/

		cout << "无参构造" << endl;
	}
	//是用一个已有的对象去初始化这个对象
	Maker(const Maker &maker)//拷贝构造
	{
		name = maker.name;
		age = maker.age;
		cout << "拷贝构造" << endl;
	}


	~Maker()//析构函数，没有参数，也没有返回值，而且只能有一个
	{
		/*if (NULL == Name)
		{
			return;
		}
		free(Name);
		Name = NULL;*/

		cout << "析构函数" << endl;
	}

	//~Maker()//默认的析构函数
	//{

	//}

private:
	string name;

	char *Name;
	int age;
};

void test01()
{
	//对象创建时先分配内存，再调用构造函数，做初始化工作
	//对象在销毁之前，会调用析构函数，做清理工作

	//有构造函数调用，必然有对象产生
	Maker m;//构造函数必须公有，不然创建不了对象

	
	cout << "------------" << endl;
	Maker m1(10);

	Maker m3(m);//编译器给我们提供了默认的拷贝构造函数，做了简单的赋值操作

	/*cout << m3.name << m3.age << endl;*/


	//编译器提供了默认的析构函数

	//对象在销毁前，先调用析构函数，再释放内存

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

