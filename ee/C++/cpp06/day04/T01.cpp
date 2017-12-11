#include <stdio.h>
#include <set>
using namespace std;

class A
{
public:
#if 0
    bool operator<( const A& other) const
    {
        return true;
    }
#endif
};

template <class T>
struct Test
{
    bool operator()(const T& a1, const T& a2)
    {
        return true;
    }
};
int main()
{
    multiset<int> objs;
    objs.insert(1);
    objs.insert(2);
    objs.insert(2);
    objs.insert(2);
    objs.insert(3);
    objs.insert(5);
    objs.insert(8);

    auto it = objs.find(2);
    printf("%d\n", *it);
    it++; // 2
    printf("%d\n", *it);
    it++; // 2
    printf("%d\n", *it);
    it++; // 3
    printf("%d\n", *it);

    it = objs.lower_bound(6);
    printf("lower_bound %d\n", *it);

    it = objs.upper_bound(6);
    printf("upper_bound %d\n", *it);

    auto its = objs.equal_range(2);
    printf("start is %d\n", *its.first);
    printf("end is %d\n", *its.second);

    set<A, Test<A> > aObjs;  // a1 < a2  Test()(a1, a2)
    aObjs.insert(A());
}
