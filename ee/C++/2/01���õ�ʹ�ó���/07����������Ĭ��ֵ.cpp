#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

int myfunc(int a,int b=2)//int b=0,���Ǻ���������Ĭ��ֵ
{
	return a+b;
}



void test()
{
	
	cout << myfunc(10) << endl;//�����Ĭ�ϲ��������Ĭ�ϲ������Բ���ʵ��
	cout<<myfunc(10, 20) << endl;//1.����ʹ�ô����ʵ��
}
int myfunc1(int a, int b = 0, int c=2,int d=30)//2.Ĭ�ϲ�������Ĳ���������ΪĬ�ϲ���
{
	return 0;
}

void myfunc2(int a, int b);//3.�����Ͷ��岻��ͬʱ��Ĭ��ֵ������һ���оͿ���
void myfunc2(int a, int b=0)
{

}
//ռλ�������������������������ǰ�üӼӺͺ��üӼ�,������Ĭ��ֵ
void myfunc3(int a, int)
{

}
void test02()
{
	//myfunc3(10,20);
}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

