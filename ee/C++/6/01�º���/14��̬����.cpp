#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//��̬ʵ�ֵ������������м̳У�����д������麯��������ָ��ָ���������
class rule{
public:
	
	//ʵ�ּӷ�
	virtual int getRsult(int a, int b)//�麯��
	{
		return 0;
	}
};

class ADD2 :public rule{
public:
	virtual int getRsult(int a, int b)
	{
		cout << "��������" << endl;
		return a + b;
	}
};

class plus_rule :public rule{
public:
	virtual int getRsult(int a, int b)//�麯��,����virtual�ɼӿɲ��ӣ��������
	{
		return a+b;
	}
};

class mins_rule :public rule{
public:
	virtual int getRsult(int a, int b)//�麯��,����virtual�ɼӿɲ��ӣ��������
	{
		return a - b;
	}
};

class cutom_rule :public rule{
public:
	virtual int getRsult(int a, int b)//�麯��,����virtual�ɼӿɲ��ӣ��������
	{
		return (a+b)*10-30;
	}
};

class add_rule :public rule{
public:
	virtual int getRsult(int a, int b)//�麯��
	{
		return a+b-a;
	}
};


//ҵ���
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

