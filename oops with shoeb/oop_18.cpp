#include <iostream>
using namespace std;

//! constructor in derived class

class base1{

    int data1;
    public:

        base1(int a){

            data1 = a;

            cout << "base class constured calll" << endl;
        }
        void getData1(){

            cout << data1 << endl;
            
        }
};

class base2
{

    int data2;

public:
    base2(int a)
    {

        data2 = a;

        cout << "base class constured calll" << endl;
    }
    void getData2()
    {

        cout << data2 << endl;
    
    }
};


class derived : public base1 , public base2{
    int derived1;
    int derived2;

    public:
        derived(int a , int b, int c ,int d) : base1(a), base2(b){

            derived1 = c;
            derived2 = d;

            cout << "Derived class constructor called" << endl;
        }

         void getData3(){

            cout << derived1 << endl;
            cout << derived2 << endl;
        }
};

int main(){

    derived vishal(1, 2, 3, 4);
    vishal.getData1();
    vishal.getData2();
    vishal.getData3();

    return 0;
}