#include <iostream>

using namespace std;

//! code ko jane ke liye note book mai jaye

//? typedef

 typedef struct employee
{
    int code;
    float salary;
    char name;
}vb;

int main()
{

    vb vishal;

    vishal.code = 121;
    vishal.salary = 15000;
    vishal.name = 'v';

    cout << "your code is : " << vishal.code << endl;
    cout << "your salry is : " << vishal.salary << endl;
    cout << " your name is : " << vishal.name << endl;

    return 0;
}
