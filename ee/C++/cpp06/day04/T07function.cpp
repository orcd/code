#include <stdio.h>
#include <functional>
using namespace std;

int foo(int a, char b, double c)
{
    printf("foo is called\n");
    return 0;
}
int main()
{
#if 0
    function<int()> fun = foo;
    fun();
#endif

    function<int(int, char)>fun1 = bind([](int a, char b, double c){},
                                                std::placeholders::_1,
                                                std::placeholders::_2,
                                                1.2);
    fun1(10, 'c');
}
