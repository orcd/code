#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

//1.���캯�����빫��
class Maker{
public:
	//�вι���
	Maker(int a)//���캯����û�з���ֵ,�����в���,��������
	{
		name = "�̵�";
		age = a;
		cout << "�вι���" << endl;
	}
	
	Maker()//�޲ι��죬Ҳ��Ĭ�Ϲ��캯��
	{
		name = "���";
		age = 20;

		/*Name =(char *) malloc(64);*/

		cout << "�޲ι���" << endl;
	}
	//����һ�����еĶ���ȥ��ʼ���������
	Maker(const Maker &maker)//��������
	{
		name = maker.name;
		age = maker.age;
		cout << "��������" << endl;
	}


	~Maker()//����������û�в�����Ҳû�з���ֵ������ֻ����һ��
	{
		/*if (NULL == Name)
		{
			return;
		}
		free(Name);
		Name = NULL;*/

		cout << "��������" << endl;
	}

	//~Maker()//Ĭ�ϵ���������
	//{

	//}

private:
	string name;

	char *Name;
	int age;
};

void test01()
{
	//���󴴽�ʱ�ȷ����ڴ棬�ٵ��ù��캯��������ʼ������
	//����������֮ǰ�������������������������

	//�й��캯�����ã���Ȼ�ж������
	Maker m;//���캯�����빫�У���Ȼ�������˶���

	
	cout << "------------" << endl;
	Maker m1(10);

	Maker m3(m);//�������������ṩ��Ĭ�ϵĿ������캯�������˼򵥵ĸ�ֵ����

	/*cout << m3.name << m3.age << endl;*/


	//�������ṩ��Ĭ�ϵ���������

	//����������ǰ���ȵ����������������ͷ��ڴ�

}

int main()
{
	test01();

	system("pause");
	return EXIT_SUCCESS;
}

