#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Father{
public:
	int mPublic;
protected:
	int mProtected;
private:
	int mPrivate;
};

//���м̳�
class Son :public Father{
	
};
//���м̳У�����Ĺ������Ե����໹�ǹ��е�
//����ı������Ե������Ǳ�����
//�����˽�����Ե������ǲ��ܷ���



void test01()
{
	Son s;
	s.mPublic;
}
//�����̳�
class Son1 :protected Father{

};

//�����̳У�����Ĺ������Ե������Ϊ��������
//����ı������Ե����໹�Ǳ���
//�����˽���������಻�ܷ���


void test02()
{
	Son1 son1;
	//son1.mPublic;
}

//˽�м̳�
class Son2 :private Father{

};


//˽�м̳У�����Ĺ������Ե������Ϊ˽������
//����ı������Ե����໹��˽��
//�����˽���������಻�ܷ���
void test03()
{
	Son2 son2;
	//son2.mPublic;
}

int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

