#include <iostream>

using namespace std;

 int num = 45; //! ----> hai global varibal hai usko print karna hai to humko cout mai << :: ///!asia likhana padata hai tab jake oh output mai aata hai

int main()
{

    int a, b, c;

    cout << "Enter the number : ";
    cin >> a;

    cout << "Enter the second  number : ";
    cin >> b;

    c = a + b;

    cout << "The sum is a or b :" << c << endl;

    cout << "The global variabl value is :" << :: num ;//!-->global varibal hai

    return 0;
}