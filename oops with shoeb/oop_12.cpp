#include <iostream>
using namespace std;

//!  single inheritance example

class base{

    int data1;

    public:
        int data2;
        void setData();
        int getData1();// data1 fucntion to abhi private hai hamko 
        //private member ko acess karana hai to aap (int getData1) aisa 
        //function usko le sakate code dekhe
        int getData2();
};

void base :: setData(){

    data1 = 10;
    data2 = 10;
};

int base :: getData1(){

    return data1;
};

int base ::getData2(){

    return data2;
};




class derived : public base{

    int data3;
    public:
        void process();
        void display();
};

void derived:: process(){

    data3 = data2 * getData1();
};

void derived :: display(){

    cout << getData1()<<endl;
    cout << data2<<endl;
    cout << data3<<endl;
};
  
int main(){

    derived ans;

    ans.setData();
    ans.process();
    ans.display();

    return 0;
}