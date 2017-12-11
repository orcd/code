
// 正确的类外实现的方法
// 最正确的是：直接在类内实现函数功能
//
template <class T>
class MyClass
{
public:
    MyClass();

    int foo();
};

template<class T>
MyClass<T>::MyClass()
{}

template<class T>
int MyClass<T>::foo()
{
    return 0;
}
