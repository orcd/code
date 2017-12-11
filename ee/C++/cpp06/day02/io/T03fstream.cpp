
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;

    // aabb1111111111111111111111
    // |
    //     |
    f.open("a.txt", ios::in|ios::out);

//    f << "aa" << "bb";

//    string str;
//    f >> str; 
//   cout << str << endl;   
//
    f.write("hello", 5).write(" world", 6) << 1234 << " " << 456;

    int a, b;
    f >> a;



    cout << a << endl;

    f >> b;
    cout << b << endl;


    f.close();
}
