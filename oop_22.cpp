#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void setNumber(int n){
        num = n;
    }
    void getNumber()
    {
        cout << "The number is : " << num << endl;
    }
};

int main()
{
    
    // Number n1;
    // Number *ptr;
    // ptr = &n1;
    Number *ptr = new Number[3]; //? Ye line upar ke 3 lines ka shortcut hai
    Number *tempPtr = ptr;

    int n;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the value of " << i << " number : ";
        cin >> n;

        ptr->setNumber(n);
        ptr++;
    }

    for (int i = 0; i < 3; i++)
    {
        tempPtr->getNumber();
        tempPtr++;
    }
     return 0;
}