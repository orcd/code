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
	//����bool,ע��û�з���ֵ
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
	Maker m;//1.����ռ䣬2.����Ĭ�Ϲ��캯��

	if (!m)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "��" << endl;
	}

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

