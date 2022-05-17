#include<iostream>
using namespace std;

//!recursion factorial

int factorial(int a){

    if (a<=1)
    {
        return 1;
    }
    return a  * factorial(a - 1);
}

// factorial formula = n * fac(n-1)

// factorial (4) = 4 * fact(3); --> compiler factorial(3) ke liye firse khud ko call karega
// factorial (4) = 4 * 3 * fact(2); --> compiler factorial(2) ke liye firse khud ko call karega
// factorial (4) = 4 * 3 * 2 * fact(1); --> compiler factorial(1) ke liye firse khud ko call karega
// factorial (4) = 4 * 3 * 2 * 1; --> abhi usko actual value 1 mil jayegi aur fir so saari value calculate karke laut jayega
// factorial (4) = 24; --> main() 24 return ho jayega

int main(){

    // ok by bhai me khale ta 

    int a;

    cout << "Enter the number";
    cin >> a;

    cout <<"The factorial of "<<a<<" is : " <<factorial(a) << endl;

    return 0;

}