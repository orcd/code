#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class MyFuncter{
public:
	MyFuncter()
	{
		name = "�仨";
	}

	int operator()(int val1,int val2)
	{
		
		cout << "���Ǽٵĺ���" << endl;
		return val1 + val2;
	}
	

	void printMyFuncter()
	{
		cout << "���Ư��" << endl;
	}
private:
	string name;
};




void test()
{

	MyFuncter func;
	func(10,20);//�º���

	cout << MyFuncter()(30,40) << endl;//��������

}




int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

