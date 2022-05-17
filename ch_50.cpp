#include <iostream>
using namespace std;

//! recursion fibonachi series

int fib(int a)
{

    if (a <= 1)
    {
        return 1;
    }
    return fib(a-2) + fib(a-1);
     
}



int main()
{

    // ok by bhai me khale ta

    int a;

    cout << "Enter the number :";
    cin >> a;

    cout << "The factorial of " << a << " is : " << fib(a) << endl;

    return 0;
}