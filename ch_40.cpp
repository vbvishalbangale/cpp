#include <iostream>

using namespace std;

//! code ko jane ke liye note book mai jaye

//?enum
union employee
{
    int code;
    float salary;
    char name;
};

int main()
{   
    enum vb{ khana,ghumne, vapas};

    vb a = vapas;
    cout << a;

    return 0;
}