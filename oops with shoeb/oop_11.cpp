#include <iostream>
using namespace std;

//?  parameterized constructer
//! eske comment shoeb bhai lagayenge

class complex
{

    int a;
    int b;

public:
    complex(int, int);

    void getdata()
    {

        cout << a << "+" << b << "i";
    }
};

complex ::complex(int a1 , int b1)
{
    a = a1;
    b = b1;
}

int main()
{

    complex num(3,4);

    num.getdata();

    return 0;
};