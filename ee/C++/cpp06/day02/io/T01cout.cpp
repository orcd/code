#include <stdio.h>
#include <iostream>
using namespace std;

class MyClass
{
public:
    operator const unsigned char*()
    {
        return (const unsigned char*)"this is test";
    }

};

#if 0
ostream& operator<< (ostream& oStream, const MyClass& obj)
{
    cout << "this is test output MyClass";
    return oStream;
}
#endif

int main()
{
#if 0
    cout << 100 ;
    fflush(stdout); // 刷新 
    while(1)
    {}
#endif

    cout.precision(5);
    cout.width(20);
    cout << std::left <<  1.23456789 ;
    cout.width(20);
    cout << "hello" << endl;

    cout << hex << 17 << dec << endl;
    cout << 200 << endl;

//    printf("%20d\n", 123);

#if 0
    MyClass obj;
    cout << "hello world" << 1 << 10.34 << obj<< endl;

    cout << "my name is" << name <<", " << "i am " << age <<"years old" <<endl;

    printf("my name is %s, i am %d years old\n", name, age);
#endif
}
