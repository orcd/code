#include "t07pointer.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>
using namespace std;

class Teacher
{
public:
    Teacher(int age, const char* name):age(age)
    {
        this->name = (char*)malloc(100);
        strcpy(this->name, name);
    }
    ~Teacher()
    {
        free(name);
    }
    int age;
    char* name;
};

int main()
{
    vector<Teacher*> teachers;
    teachers.push_back( new Teacher(30, "xiaowang") );
    teachers.push_back( new Teacher(40, "xiaoli") );
    teachers.push_back( new Teacher(50, "xiaozhang") );

    Teacher* & t = *teachers.begin();
    t->age = 60;

    for(auto it=teachers.begin(); it!=teachers.end(); ++it)
    {
        // Teacher t = *it;  // copy
        Teacher* t = *it; // avoid copy, speed up
        printf("%d, %s\n", t->age, t->name);
    }

    for(auto it=teachers.begin(); it!=teachers.end(); ++it)
    {
        Teacher* t = *it;
        delete t;
    }
    teachers.clear();
}
