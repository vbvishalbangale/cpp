#include <iostream>
using namespace std;

class Simple {

    int data1;
    int data2;
    public:

        //* constructor overloading

        // default constructor
        Simple(void){
            data1 = 0;
            data2 = 0;
            cout << "This is default constructor" << endl;
        }

        // parameterized constructor with 1 args
        Simple(int a){
            // args matlab arguments
            data1 = a;
            data2 = 0;
            cout<<"This is parameterized constructor with 1 args"<<endl;
        }

        // parameterized constructor with 2 args
        Simple(int a, int b){
            data1 = a;
            data2 = b;
            cout<<"This is parameterized constructor with 2 args"<<endl;
        }
        
        void display(void){
            cout<<"The value of data 1 is : "<<data1<<endl;
            cout<<"The value of data 2 is : "<<data2<<endl;
        }

};

int main(){

    Simple s(1);

    s.display();

        return 0;
}