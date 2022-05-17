#include <iostream>
using namespace std;
 
//? defualt constructer 
//! eske comment shoeb bhai lagayenge


class complex{

    int a;
    int b;

    public:
        complex();
        void getdata(){

            cout << a << "+" << b <<"i" ;
        }
};

complex :: complex (){

    a = 5;
    b = 5;
}

int main(){

    complex num;

    num.getdata();

    return 0;
};