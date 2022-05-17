#include<iostream>

using namespace std;

//!code ko jane ke liye note book mai jaye

// sturcuter 

struct employee
{
    int code;
    float salary;
    char name;
};

int main(){

    struct employee vishal;

    vishal.code = 121;
    vishal.salary = 15000;
    vishal.name = 'vishal';

    cout << "your code is" << vishal.code<<endl;
    cout << "your salry is" << vishal.salary<<endl;
    cout << " your name is" << vishal.name<<endl;

    return 0;
}