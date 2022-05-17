
#include<iostream>

using namespace std;

//? fucniton prototype 



int sum(int, int); //!---> isko prototype bolte hai 


int main()
{

    int a;
    int b;

    cout << "Enter the number first";
    cin >> a;

    cout << "Enter the number secodn";
    cin >> b;

    cout << "The sum is a or b is " << sum(a, b);

    return 0;
}

int sum(int a, int b)
{

    int c = a + b;

    return c;
};