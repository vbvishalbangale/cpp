#include <iostream>
using namespace std;
#include<iomanip>


//! manipulator ke liye ek headar file hai matbalb libery 
//?#include<iomanip>


//? manipulator do key rehte hai ek (endl)

// endl line  output ko niche print karta hai

// or setw(4) output ko 0 aise print karta hai
                  //   00
                //    000
int main(){

    //! hum jab code karte hai tab aisa output ata hai 

    // without manipulate

    int a = 50;
    int b = 600;
    int c = 1000;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    cout << endl;

    // abhi hai nicheka code manipulate ka key use kiye hai output dekhe kaise aat ahai run karke

    int x = 77;
    int y = 700;
    int z = 7000;

    cout <<setw(4)<< x << endl;
    cout <<setw(4)<< y << endl;
    cout <<setw(4)<< z << endl;

    return 0;  
}
