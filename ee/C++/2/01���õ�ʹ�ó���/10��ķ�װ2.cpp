#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Maker{

public:
	void func()//Ȩ���Ǹ����������ġ�������û��Ȩ��֮��
	{
		bing;
		mFace;
		caichan;
	}
public://����
	int mFace;//˧

private://˽��
	int bing;

protected://����
	int caichan;
};

class Son :public Maker{//�̳�
public:
	void func()
	{
		mFace;
		caichan;
		//bing;
	}
};

//���ڣ��Լ�������û��Ȩ��֮��
//����м̳й�ϵ���࣬������Է��ʸ���ı����͹���Ȩ�޵ĳ�Ա����


//Ȩ�ޣ�
//������Է��ʹ���Ȩ�޵ĳ�Ա
//���ⲿ�����Է��ʱ�����˽�еĳ�Ա

//����������ڣ����Է��ʸ���ı����͹���Ȩ�޵ĳ�Ա

void test()
{
	Maker maker;

	maker.func();
	maker.mFace;
	

}
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

