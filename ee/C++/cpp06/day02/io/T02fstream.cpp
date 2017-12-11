
#include <fstream>

using namespace std;


int main()
{
    ofstream of;
    of.open("a.txt", ios::out);

//    of.write("hello", 5);
    of << "asdfsdf" << 1.23 << std::hex <<13 << endl;
    of << "asdfsdf" << 1.23 << 13 << endl;

    of.close();
}
