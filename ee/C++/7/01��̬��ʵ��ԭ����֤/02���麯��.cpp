#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//�д��麯������г����࣬����ʵ��������
class Father{//�ӿ��࣬û�����ݶ��壬ֻ�к���ԭ��

public:
	//�����Ĺ���˵��
	//a:
	//b:
	//����ֵ
	virtual void func(int a, int b) = 0;//���麯��
	virtual int func2(int a, int b) = 0;//�ӿ�

};
//����̳�һ�������࣬��ȥʵ�ִ��麯������ô�����Ҳ�ǳ�����
//ע�⣺Ҫʵ�����и���Ĵ��麯��
class Son :public Father{
public:
	virtual void func(int a, int b)//���麯��
	{

	}

	virtual int func2(int a, int b)//�ӿ�
	{

	}
};

void test()
{
	//Father f;�����಻��ʵ��������

	Son s;
}


int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

