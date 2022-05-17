#include <iostream>
using namespace std;

//!complex number program

class complex{

    int x;
    int y;

    public:
        void setData(int v, int c){

            x = v;
            y = c;
        }
       
        void printComplex(){

            cout << x << " + " << y <<"i"<< endl;
        }

    //  ye x ki value ko o1 ki x ki value + o2 ki x value ko sum karta hai 
    //  and aise hi y ki value ko o1 ki y ki value + o2 ki y value ko sum karta hai 
        void setComplexBySum(complex o1, complex o2){
            x = o1.x + o2.x;
            y = o1.y + o2.y;
        }
};

// (i-o-ta) आयोटा ek tarike se imaginary imaginary matalab apne sirf dimag mai rehne wali value 
// value ke liye use karte hai
// jo 2d vector value humko exact pata nahi hoti hai to uske ke liye hum iota ka use karte hai

int main(){

    complex c1,c2,c3;

    c1.setData(3, 8);
    c1.printComplex();

    c2.setData(5, 2);
    c2.printComplex();

    c3.setComplexBySum(c1,c2);
    c3.printComplex();

    // 3 + 8
    // 5 + 2
    //-------
    // 8 + 10 
    return 0;
};