
#include <stdio.h>

template<class T> 
T add(T a, T b)
{
    printf("template add\n");
    return a + b;
}


int add(int a, int b)
{
    printf("normal add\n");
    return a+b;
}

double add(double a, int b)
{
    printf("normal add double int\n");
    return a+b;
}

#if 0
double add(double, double)
{}
#endif

int main()
{
    printf("%d\n", add(1, 2));

    // 不像普通函数一样做隐式转换
    // 但是如果你特例化这个模板，那么就可以调用
    double result = add<double>   (10, 20.3);
    printf("%g\n", result);

    int iResult = add<int> (10, 20.3);
    printf("%d\n", iResult);


    add<> (1, 1); // call template
    add(1, 1); // call normal
    add(1.0, 2); // call double int
    add(1.1, 2.2); // call template
}




