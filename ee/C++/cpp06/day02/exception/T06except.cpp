
#include <iostream>
#include <stdexcept>
using namespace std;

int foo()
{
    throw logic_error("haah cuowla");
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
