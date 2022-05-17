#include <iostream>
#include <cmath>
// adding c math library for using math functions


using namespace std;

class SimpleCalculator
{

protected:
    int a;
    int b;

public:
    void set_number_simple()
    {
        cout << "Enter the 1 value :- ";
        cin >> a;
        cout << "Enter the 2 value :- ";
        cin >> b;
    }

    void get_number_simple()
    {
        cout << endl;
        cout << "*************************" << endl;
        cout << endl;
        cout << "The value of a + b : " << a + b << endl;
        cout << "The value of a - b : " << a - b << endl;
        cout << "The value of a * b : " << a * b << endl;
        cout << "The value of a / b : " << a / b << endl;
    }
};

class ScientificCalculator
{

protected:
    int a;
    int b;

public:
    void set_number_scientific()
    {
        cout << "Enter the 1 value :- ";
        cin >> a;
        cout << "Enter the 2 value :- ";
        cin >> b;
    }

    void get_number_scientific()
    {
        cout << endl;
        cout << "*************************" << endl;
        cout << endl;
        
        cout<<"The value of sin(a) is : "<<sin(a)<<endl;
        cout<<"The value of cos(a) is : "<<cos(a)<<endl;
        cout<<"The value of tan(a) is : "<<tan(a)<<endl;
        cout<<"The value of exp(a) is : "<<exp(a)<<endl;
        cout << endl;
        cout<<"The value of sin(b) is : "<<sin(b)<<endl;
        cout<<"The value of cos(b) is : "<<cos(b)<<endl;
        cout<<"The value of tan(b) is : "<<tan(b)<<endl;
        cout<<"The value of exp(b) is : "<<exp(b)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator
{
    // isko khali rakh
};

int main()
{

    HybridCalculator calc;

    
    cout << endl;
    cout << "*** Simple Calculator ***" << endl;
    cout << endl;

    calc.set_number_simple();
    calc.get_number_simple();

    
    cout << endl;
    
    cout << "*** Scietific Calculator ***" << endl;
    cout << endl;

    calc.set_number_scientific();
    calc.get_number_scientific();



    return 0;
}