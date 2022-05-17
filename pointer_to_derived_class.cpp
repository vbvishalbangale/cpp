#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << " 1 This is the display function of Base class " << endl;
    }
};

class Derived : public Base
{

public:
    void display()
    {
        cout << " 2 This is the display function of Derived class " << endl;
    }
};

int main()
{

    Base *base_class_pointer;

    Base obj_base;
    Derived obj_derived;

    base_class_pointer = &obj_derived;

    base_class_pointer->display();

    Derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->display();

    return 0;
}