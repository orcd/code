#include "T13temp.h"

template <class T>
MyClass<T>::MyClass()
{

}

template <class T>
int MyClass<T>::foo()
{
    return 0;    
}


#if 0
int main()
{
    MyClass<int> a;
    a.foo();
}
#endif
