#include <iostream>

using namespace std;

//? call by referance use karne ka 2 dusra tarika


// agar aap sirf uppar void mai  & laga dete hai tabhi aapka value change hoyegi niche code mai dekhe

// swap  in this code

void swapPointer(int &a, int &b) 
{

    int temp = a; 
    a = b;
    b = temp;


};
int main()
{
    

    int a = 5;
    int b = 4;

    cout << a << " --- " << b << endl;

    swapPointer(a, b);

    cout << a << " --- " << b;

    return 0;
}
