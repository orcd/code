#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

class Printer{
private:
	Printer()
	{
		mNum = 0;
	}
	Printer(const Printer& p){}
public:
	static Printer*getInstan()
	{
		return p;
	}
	int getNum()
	{
		return mNum;
	}

	//��ӡ����
	void Print(string content)
	{
		cout << "��ӡ���ݣ�" << content << endl;
		mNum++;
	}

private:
	static Printer *p;

	int mNum;
};
Printer *Printer::p = new Printer;

void test()
{
	Printer *printer1 = Printer::getInstan();
	printer1->Print("���۵���");

	Printer *printer2 = Printer::getInstan();
	printer2->Print("�ͻ�����");

	Printer *printer3 = Printer::getInstan();
	printer3->Print("��������");

	Printer *printer4= Printer::getInstan();
	cout << "��ӡ�Ĵ�����" << printer4->getNum() << endl;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

