#include <stdio.h>
#include <set>
#include <functional>
using namespace std;

void funxxx(function<int(int, int)> add)
{
    int result = add(10, 20);
    printf("%d\n", result);
}

function<void()> l;

void func()
{
    int a = 10;
    l = [=]()mutable{
        //printf("%d\n", a);
        a = 100;
    };
}

void func1()
{
    int x = 1000;
    l();
    printf("x=%d\n", x);
}

// lambada表达式就是匿名函数
int main()
{
#if 0
    // []{};
    auto  func = []{
        printf("hello lambada\n");
    };

    func();
#endif

    //[]()mutable->int{};
    // [] 捕获列表
    // () 表示形参列表：可省略
    // {} 代码块
    // ->int表示返回值类型为整数，->double, ->char，也可以省略

  //  function<int(int, int)> func = [](int a, int b){ return a+b; };

#if 0
    int d = 1000;
    int d1 = 1001;
    auto func = [&](int a, int b){
        d = 1002;
        return a+b+d +d1;
    };
    int result = func(10, 20);
    printf("%d\n", result);
    printf("%d\n", d);

    funxxx(func);
#endif
    func();
    func1();


    return 0;
}
