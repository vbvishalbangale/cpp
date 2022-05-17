#include <iostream>

using namespace std;

//? call by referance use karne ka pehla tariaka

//swap  in this code

void swapPointer(int *a , int *b) // !humne pichale program mai swap nahi ho raha dekha
{

    int temp = *a; //! swap krne liye humne pointer  lena padta hai
    *a = *b;        
    *b = temp;     

             //! hum jaise poiter mai value adress le  te hai vaise karne se swap hoyega

};
int main()
{
    //! to ans mai hume a mai 4 or b mai 5 value aani chahiye to abhi ayegi

    int a = 5;
    int b = 4;

    cout << a << " --- " << b << endl;

    swapPointer(&a, &b);
    
    cout << a << " --- " <<b;

    return 0;

}
