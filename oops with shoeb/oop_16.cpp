#include <iostream>
using namespace std;

//!ambibuity


class base1{

    public:

    void greet(){

        cout << "hi I am vishal" << endl;
    }
};

class base2
{

public:
    void greet()
    {

        cout << "kaise ho aap log" << endl;
    }
};

class derived : public base1, public base2{

    int a;

    public:
        void greet(){
            base1 ::greet();
            base2 ::greet();
        }
};

int main(){

    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet();

    return 0;
}