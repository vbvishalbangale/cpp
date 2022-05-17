#include <iostream>
using namespace std;

//! multiple inheritance


class base1
{
    protected:
        int base1int;

    public:
        void set_base1int(int a){

            base1int = a;
        }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {

        base2int = a;
    }
};


class derived :public base1, public base2{

    public:
        void show(){

            cout << "The value is :- " << base1int<<endl;
            cout << "The value is :- " << base2int<<endl;

            cout << "The sum is   :- " << base1int + base2int;
        }
};

int main()
{

    derived vishal;

    vishal.set_base1int(5);
    vishal.set_base2int(6);

    vishal.show();

    return 0;
}