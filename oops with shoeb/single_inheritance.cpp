#include <iostream>
using namespace std;

//! Notes :
//! Private members Derived class me inherite (inherite matlab base se derived me nahi aayega uska maal masala) nahi hota hai

//? default visiblity private hota hai
// agar visiblity mode public raha to base class ke public members Derived class ke public members ban jate hai
// agar visiblity mode private raha to base class ke public members Derived class ke private members ban jate hai
// ! aur yaad rakhana base class ke private members kabhi bhi inherite (inherite matlab base se derived me nahi aayega uska maal masala) nahi hote hai

class BaseClass
{

    //! humko inherite karne ki jurrat bhi mat karna
    int a;
    int b;

//? hum razi hai inherite hone ke liye
public:
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void displayData(void)
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};

class Derived : public BaseClass
{

    int c;

public:
    void setDataC(int i)
    {
        c = i;
    }
    void displayDataC(void)
    {
        cout << "The value of c is " << c << endl;
    }
};

int main()
{

    Derived d;

    d.setData(4, 5);
    d.setDataC(8);
    d.displayData();
    d.displayDataC();

    return 0;
}