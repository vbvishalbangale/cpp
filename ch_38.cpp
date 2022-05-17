#include <iostream>

using namespace std;
//!unions ko aap ek bar he print kara sakte hai deep mai janeke 
//!liye book mai jaye vapa pe bhar bhar ke likha hai

// agar union ko aap tino bhi print karete hai to oh garbage value de dega oh sirf
// ek hee ko print karta hai  
//? union ko hum memory bachane ke liye use karte hai

// ?union

union employee
{
    int code;
    float salary;
    char name;
};

int main()
{

   union employee vishal;

    vishal.code = 121;
   

    cout << "your code is" << vishal.code << endl;
    
    return 0;
}