#include<iostream>

using namespace std;

//?constant in cpp

int main(){

//! hai abhi costant nahi hai constant yani humne int ke aage const laga diya to oh niche change nahi hoti usme koi bhi value nahi ja sakti hai samjana na aaye to note book dekh vishal bhai
    int a = 30;
    cout << a << endl;
    a = 40;
    cout << a<<endl;

    //! constant he hai-:

    const int a = 30;
    cout << a << endl;
    a = 40;                 // ! hai code run nahi hoga kyu ki humne const liya hai or humne niche a mai value de diye hai ohh bol raha hai ki aapne const liye esliye aap change nahi kr sakte aapko run karana hoga to aap a = 40 ko nikal  do
    cout << a << endl;

    return 0;
}