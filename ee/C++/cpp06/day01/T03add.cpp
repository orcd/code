
#include <stdio.h>

double add(double a, double b)
{
    printf("add1\n");
    return a+b;
}

template <typename T>
T add(T a, T b)
{
    printf("add2\n");
    return a + b;
}

template <class T1, class T2>
T1 add(T1 a, T2 b)
{
    return a + b;
}

#if 0
int add(int, int);
double add(double, double);
#float add(float, float);
#endif


int main()
{
    int result = add(1, 5);
    double result1 = add(1.0, 7.1);
    char result2 = add('a', 'b');

    double result3 = add(1, 7.1);

    printf("result3 is %g\n", result3);

    printf("result is %d, result1 is %f\n", result, result1);
    return 0;

}

