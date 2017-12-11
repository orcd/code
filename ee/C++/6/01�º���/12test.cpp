#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//虚基类
class Animal{
public:
	Animal()
	{
		age = 100;
	}
public:
	int age;
};

class Sheep :virtual public Animal{//虚继承解决菱形问题

};

class Tuo :virtual public Animal{

};

class SheepTuo :public Sheep, public Tuo{

};

void test()
{
	SheepTuo st;
	//st.age;//二义性

	st.Sheep::age;
	
	cout << *((int*)*(int*)&st + 1) << endl;

	cout<<((Animal*)((char*)&st + *((int*)*(int*)&st + 1)))->age << endl;

	cout << ((Animal*)((char *)&st + 8))->age << endl;


}

void test02()
{
	Sheep s;

	//&s;
	(int *)&s;
	*(int *)&s;
	(int *)*(int *)&s;
	(int *)*(int *)&s + 1;
	*((int *)*(int *)&s + 1);

	(char*)&s;
	(char*)&s + *((int *)*(int *)&s + 1);
	cout<<((Animal*)((char*)&s + *((int *)*(int *)&s + 1)))->age << endl;

}


int main()
{
	test();
	//test02();
	system("pause");
	return EXIT_SUCCESS;
}

