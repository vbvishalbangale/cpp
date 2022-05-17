#include <iostream>

using namespace std;

//?function overloadeaded

//? calculate the valum of  reactangale box 

int valum(int l, int b , int h)
{

    return l*b*h;
}

int main()
{

    cout << valum(5, 5 ,7) << endl;

    return 0;
}