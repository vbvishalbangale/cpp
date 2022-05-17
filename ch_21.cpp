#include<iostream>

using namespace std;


//!agar aapne loop 50 bhi chalaya hai or aapko use 5 pr nahi to aapko jidhar rokana udhar rokana hai to loop mai if statement mai if(i==3) value dal de

int main(){

    for (int i = 0; i < 50; i++)
    {
        cout << i << endl;
        if (i==2)
        {
            break;
        }
        
    }
    
    return 0;
}