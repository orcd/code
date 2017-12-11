#include <stdio.h>
#include <functional>
using namespace std;

int foo()
{
    static int i=0;
    printf("hello foo %d\n", i++);
}

int func( int(*arg)() )
{

}

class F
{
public:
    int calltime = 0;
    int operator()()
    {
        printf("hello foo1 %d\n" , calltime++);
    }
};

F foo1;

int main()
{
    int result = minus<int>()(10, 20);
#if 0
    set<int> a;
    a.insert(10);
    a.insert(20);
#endif

    printf("%d\n", result);

    foo();
    foo();
    foo();
    foo1();
    foo1();
    foo1();


    F foo2;
    foo2();
}
