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

//公有继承
class Son :public Father{
	
};
//公有继承：父类的公有属性到子类还是公有的
//父类的保存属性到子类是保护的
//父类的私有属性到子类是不能访问



void test01()
{
	Son s;
	s.mPublic;
}
//保护继承
class Son1 :protected Father{

};

//保护继承：父类的公有属性到子类变为保护属性
//父类的保护属性到子类还是保护
//父类的私有属性子类不能访问


void test02()
{
	Son1 son1;
	//son1.mPublic;
}

//私有继承
class Son2 :private Father{

};


//私有继承：父类的公有属性到子类变为私有属性
//父类的保护属性到子类还是私有
//父类的私有属性子类不能访问
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

