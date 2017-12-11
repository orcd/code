
#include <stdio.h>
#include <functional>
using namespace std;

void foo(int arg1, char arg2, double arg3)
{
    printf("foo is called arg1=%d, %c, %f\n", arg1, arg2, arg3);
}

struct MyFunc
{
    void operator()(int arg1)
    {
        printf("operator is called arg1=%d\n", arg1);
    }
};

class MyClass
{
public:
    void foo(int a, int b, int c)
    {
        printf("MyClass::foo is called\n");
    }
};


int main()
{

#if 0
// 可以修改函数的名字
    foo();
    auto fun = bind(foo);
    fun();
#endif
#if 0
    auto fun = bind(MyFunc(), 100);
    fun();
#endif

#if 0
    auto fun = bind(foo, 100, 'c', 1.2);
    fun();
#endif

#if 0
// std::placeholders::_1
    auto fun = bind(foo, 100, 'c', std::placeholders::_1);
    fun(1.2);
#endif

#if 0
    auto fun = bind(foo, std::placeholders::_2,
                    std::placeholders::_1, std::placeholders::_3);
    fun('c', 100, 1.4);
#endif

#if 0
    MyClass obj;
    auto fun = bind(&MyClass::foo, &obj, 10, 20, 30);
    fun(); // --> obj.foo() --> foo(&obj)
#endif
}
