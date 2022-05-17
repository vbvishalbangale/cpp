#include <iostream>
using namespace std;

class calculator
{

    int a, b;

public:
    void setNumber(void)
    {
        cout << "Enter the value of a" << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }

    void getNumber(void)
    {
        cout << "The value of a+b is : " << a + b << endl;
        cout << "The value of a-b is : " << a - b << endl;
        cout << "The value of a/b is : " << a / b << endl;
        cout << "The value of a*b is : " << a * b << endl;
    }
};

int main()
{

    calculator calc;
    calc.setNumber();
    calc.getNumber();

    return 0;
}