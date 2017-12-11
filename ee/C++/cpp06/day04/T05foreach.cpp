#include <algorithm>
#include <functional>
#include <vector>
#include <stdio.h>
using namespace std;

#if 0
void func(int& arg, int v)
{
    printf("%d, %d\n", arg, v);
    arg = 3;
}
#endif

struct MyFunc : public binary_function<int, int, void>
{
    void operator()(int arg, int v) const
    {
        printf("%d, %d\n", arg, v);
    }
};

#if 0
void callback(MenuItem* item)
{

}

void installMenuClicked(MenuItem* item)
{
    cb = bind(callback, item) ;
    InstallEvent(cb);
}
#endif

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    binder1st<MyFunc> func = bind1st(MyFunc(), 100);

//    for_each(v.begin(), v.end(), bind2nd(MyFunc(), 100));

    for_each(v.begin(), v.end(), func);
}
