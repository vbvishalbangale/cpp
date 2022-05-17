#include<iostream>

using namespace std;

int main(){

    // selection control structure switch case

    int age;
    cout << "Enter your age";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "your age 18 bhai tu bada ho gaya";
        break;
    case 19:
        cout << "your age 19 ";
        break;
    case 20:
        cout << "your age 12";
        break;
    case 21:
        cout << "your age 21 ";
        break;

        default:
            cout << "invalid age";
            break;
    }
    
    return 0;
}