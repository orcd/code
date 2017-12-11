
#include <stdio.h>

class A
{
public:
    template<class T>
    T add(T a, T b)
    {
        return a + b;
    }
};

int main()
{
    A obj;
    int ret = obj.add(1, 2);
    printf("%d\n", ret);

    // error
    //obj.add(1, 1.0);
    
    obj.add<double>(1, 1.0);
}


