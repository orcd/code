
#include <stdio.h>
#include <functional>
using namespace std;

void fun(int a, char b)
{
    printf("fun is called %d\n", a);
}
int main()
{
    auto a = std::bind(fun, 10, std::placeholders::_1);
    a('a');
}


