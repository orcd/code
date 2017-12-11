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


class Son :public Father{
public:
	int mSon;
	int mSon2;
};
int main()
{

	system("pause");
	return EXIT_SUCCESS;
}

