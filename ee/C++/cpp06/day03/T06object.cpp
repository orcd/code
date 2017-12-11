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
    //    this->name = (char*)malloc(100);
     //   strcpy(this->name, name);
        this->name = name;
    }
    ~Teacher()
    {
    //    free(name);
    }
    int age;
    //char* name;
    string name;
};

int main()
{
    vector<Teacher> teachers;
    printf("1\n");
    teachers.push_back( Teacher(30, "xiaowang") );
    teachers.push_back( Teacher(40, "xiaoli") );
    teachers.push_back( Teacher(50, "xiaozhang") );

    Teacher& t = *teachers.begin();
    t.age = 60;
  //  (*teachers.begin()).age = 60;

    printf("2\n");
    for(auto it=teachers.begin(); it!=teachers.end(); ++it)
    {
        // Teacher t = *it;  // copy
        Teacher& t = *it; // avoid copy, speed up
        printf("%d\n", t.age);
    }
printf("3\n");


}
