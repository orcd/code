
#include <stido.h>

template<T>
class AutoPtr
{
    T* ptr;

    AutoPtr() {ptr = NULL;}
    ~AutoPtr() {if(ptr) delete ptr;}
    void operator=(T* p){ ptr = p;}
};

// 智能指针
void foo()
{
//    int * p = new int;
    AutoPtr<int> p = new int;
    AutoPtr<int> p2 = p;

    throw 1;

  //  delete p; // 内存泄漏
}

int main()
{
    try{
        foo();
    }
    catch(...)
    {
        // 已经得不到p的地址值，所以无法清理内存
    }
}
