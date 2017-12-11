
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void inputInfo()
{
    string name;
    string id;
    int age;
    
    cout << "姓名: ";
    cin >> name;
    cout << "学号: ";
    cin >> id;
    cout << "年龄: ";
    cin >> age;

    // 写入文件
    ofstream f;
    f.open("student.txt", ios::out | ios::app);
    f << setw(20) << setiosflags(ios::left) << name << setw(20)<< id << setw(20)<< age << endl;
    f.close(); 
}

void showInfo()
{
    cout << "请输入学号: ";
    string inputId;
    cin >> inputId;

    string name;
    string id;
    int age;

    ifstream f;
    f.open("student.txt", ios::in);
    while(1)
    {
        if(f.eof()) break;

        f >> name >> id >> age;

        if(id == inputId)
        {
            cout << setw(20) << setiosflags(ios::left) << name << setw(20)<< id << setw(20)<< age << endl;
            f.close();
            return;
        }
    }
    f.close();
}



void modifyInfo()
{}

void mainMenu()
{
    int cmd;
    cout << "1. 输入学生信息" << endl;
    cout << "2. 查看学生信息" << endl;
    cout << "3. 修改学生信息" << endl;
    cout << "请输入选项: "; 
    cin >> cmd;

    switch(cmd)
    {
        case 1:
            inputInfo();
            break;
        case 2:
            showInfo();
            break;
        case 3:
            modifyInfo();
            break;
    }
}

int main()
{
    while(1)
    {
        mainMenu();
    }
}
