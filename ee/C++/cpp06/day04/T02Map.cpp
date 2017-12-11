
#include <map>
#include <string>
#include <stdio.h>
using namespace std;

#if 0
template <class T1, class T2>
pair<T1, T2> make_pair(T1 a, T2 b)
{
    return pair<T1, T2>(a, b);
}
#endif
int main()
{
    map<string, int> objs;
    objs.insert(pair<string, int>("tom", 18));
    objs.insert(make_pair("jack", 19));
    objs["rose"] = 10;

    auto it = objs.lower_bound("s");
    printf("%s\n", it->first.c_str());

    //  jack rose tom

    objs["key"]; // 这个操作会增加对象

  //  objs.erase("rose");

    if(objs.find("smith") != objs.end() &&
            objs["smith"] != 20) // 自动被加了一个smith对象
    {
    }



}
