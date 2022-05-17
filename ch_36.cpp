#include <iostream>

using namespace std;

//! code ko jane ke liye note book mai jaye

//? sturcuter

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{

    struct employee vishal;
    struct employee shoeb;

    vishal.code = 121;
    vishal.salary = 15000;
    vishal.name = 'v';

    shoeb.code = 421;
    shoeb.salary = 153000;
    shoeb.name = 's';

    cout << "your code is :" << vishal.code << endl;
    cout << "your salry is :" << vishal.salary << endl;
    cout << " your name is :" << vishal.name << endl;

    cout << endl; //----> cout hamne dono output mai gap rakhne ke liye liya hai

    cout << "your code is :" << shoeb.code << endl;
    cout << "your salry is :" << shoeb.salary << endl;
    cout << " your name is :" << shoeb.name << endl;

    return 0;
}