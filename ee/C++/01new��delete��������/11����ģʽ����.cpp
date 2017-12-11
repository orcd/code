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

	//打印方法
	void Print(string content)
	{
		cout << "打印内容：" << content << endl;
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
	printer1->Print("销售单据");

	Printer *printer2 = Printer::getInstan();
	printer2->Print("客户名单");

	Printer *printer3 = Printer::getInstan();
	printer3->Print("报销名单");

	Printer *printer4= Printer::getInstan();
	cout << "打印的次数：" << printer4->getNum() << endl;

}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

