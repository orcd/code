#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class Maker{
	friend ostream &operator<<(ostream &out, Maker &m);
public:
	Maker(int val)
	{
		this->id = val;
	}
	//ǰ��++
	Maker &operator++()
	{
		++id;
		return *this;
	}
	//����++
	Maker operator++(int)//ռλ����,ֻ����int����
	{
		//�ȷ��أ���++
		Maker temp(*this);//��������˿�������ȥ��ֵtemp���id
		++id;//����++����thisָ��ָ��ı���
		return temp;
	}
	 

private:
	int id;
};

ostream &operator<<(ostream &out, Maker &m)
{
	cout << "ID:" << m.id << endl;
	return out;
}

void test()
{
	Maker m(10);
	cout << ++m << endl;
	//cout << (m++)++ << endl;//����д��
	cout << m++ << endl;

	


}

int main()
{
	test();
	system("pause");
	return EXIT_SUCCESS;
}

