#include <stdio.h>
#include <list>
using namespace std;

#define rand 100
class Plane
{
public:
    int x;
    int y;
    int image;
    int hp;

    Plane(){
        hp = 200;
        x = rand;
        y = 0;
    }
};

int main()
{
    list<Plane*> planes;

    Plane* p = new Plane;
    p->hp = 0;
    planes.push_back(p);

    p = new Plane;
    p->hp = 200;
    planes.push_back(p); // 0->200
#if 0
    for(auto it = planes.begin(); it!=planes.end(); ++it)
    {
        Plane* p = *it;
        if(p->hp <= 0)
        {
            // erase 一边遍历，一边删除元素，是有问题的
            planes.erase(it);
            // break;
        }
    }
#endif

    for(auto it = planes.begin(); it!=planes.end(); )
    {
        Plane* p = *it;
        if(p->hp <= 0)
        {
            // erase函数会返回指向下一个元素的迭代器
            it = planes.erase(it);
        }
        else
        {
            ++it;
        }
    }

    printf("%d\n", (int)planes.size());

}
