#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#define ADD(x,y) x+y
inline int add(int x,int y)
{
	return x + y;
}

void test()
{

	int ret1 = ADD(10, 20) * 10;//300
	int ret2 = add(10, 20) * 10;
	cout << "ret1=" << ret1 << endl;
	cout << "ret2=" << ret2 << endl;
}

#define COMDON(x,y) ((x)<(y)?(x):(y))

int comdon(int a,int b)
{
	return a < b ? a : b;
}
void test02()
{
	int a = 1;
	int b = 3;

	//(++a)<(b) ?(++a):(b)
	//cout << "COMDON:" << COMDON(++a, b) << endl;;//
	cout << "comdon:" << comdon(++a, b) << endl;

}


int main()
{
	//test();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}

