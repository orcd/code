
#include <stdio.h>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> students;

//    students.insert("tom", 18);
    students.insert( pair<string, int>("tom", 18) );
    students["xiaowang"] = 20;
    students["xg"] = 20;
    students["xg1"] = 20;
    students["xg2"] = 20;
    students["xg3"] = 20;
    students["xg4"] = 20;


    // hongheishu
    map<string, int>::iterator it;
    for(it=students.begin(); it!=students.end(); ++it)
    {
        printf("%s, %d\n", it->first.c_str(), it->second);
    }
}
