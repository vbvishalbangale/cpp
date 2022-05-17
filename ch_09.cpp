#include<iostream>
using namespace std;

//?type casting sum   

int main(){

    
    // * operation results
    // int + int = int
    // float + int = float 
    // int + float = float
    // float + float = float

    int a = 56;
    float b = 56.6;

    cout << "The value is a " << (float)a<<endl;
    cout << "The value is a " << (float)a<<endl;

    cout << "The value is b " << (int)b<<endl;
    cout << "The value is b " << (int)b<<endl;

    int c = int(b);
    cout << "The value of c is " << c << endl;

    cout << "The value is a+b : " << a + b << endl; //! --> int or float ka calculation karte hai tab float mai ans aata hai
    cout << "The value is a+b : " << a + (int)b << endl;
    cout << "The value is a+b : " << a + (int)b << endl;


    return 0;
}