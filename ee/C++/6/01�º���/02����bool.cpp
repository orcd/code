#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{
public:
	Maker()
	{
		this->num = 0;
	}

	void setNum(int val)
	{
		this->num = val;
	}
	//重载bool,注意没有返回值
	/*operator bool()
	{
		if (num <= 0)
		{
			return false;
		}
		return true;
	}*/

	bool operator !()
	{
		if (num <= 0)
		{
			return true;
		}
		return false;
	}



public:
	int num;
};

void test()
{
	Maker m;//1.分配空间，2.调用默认构造函数

	if (!m)
	{
		cout << "真" << endl;
	}
	else
	{
		cout << "假" << endl;
	}

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

