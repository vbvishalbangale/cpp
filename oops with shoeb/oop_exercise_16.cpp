#include <iostream>
using namespace std;

class simpleCalculator
{

protected:
    int a;
    int b;

public:
    void set_number()
    {
        cout << "Enter the 1 value :- ";
        cin >> a;
        cout << "Enter the 2 value :- ";
        cin >> b;
    }

    void get_number()
    {
        cout << endl;
        cout << "*************************" << endl;
        cout << endl;
        cout<<"The value of a + b : " << a + b<<endl;
        cout<<"The value of a - b : " << a - b<<endl;
        cout<<"The value of a * b : " << a * b<<endl;
        cout<<"The value of a / b : " << a /  b<<endl;

    }
};

class HybridCalculator : public simpleCalculator
{

public:
    void display()
    {

        set_number();
        get_number();
    }
};

int main()
{


    return 0;
}