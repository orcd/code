
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class MyException : public exception
{
public:
    string error;

    MyException(string other): error(other)
    {

    }

    ~MyException() throw()
    {}

    const char* what() const throw()
    {
        return error.c_str();
    }
};

int foo()
{
  //  throw logic_error("haah cuowla");
    throw MyException("aaaaa");
}

int main()
{
    try
    {
        foo();
    }
    catch(exception& e) // exception& e = yichang;   exception e = yichang
    {
        cout << e.what() << endl;
    }
}
