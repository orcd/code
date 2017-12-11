
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> d;
    for(int i=0; i<10000; ++i)
    {
        d.push_back(i);
    }
    cout << d.size() << " " << d.capacity() << endl;
    d.resize(10);
    cout << d.size() << " " << d.capacity() << endl;

//    vector<int>(d) .swap(d);
    vector<int> tmp(d); // 0~10
    tmp.swap(d); // d = 0~10 capacity

    cout << d.size() << " " << d.capacity() << endl;

}
