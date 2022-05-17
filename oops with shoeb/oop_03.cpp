#include<iostream>

using namespace std;

//!class mai arrays

class shop{

    int itom[10];
    int itomPrice[10];
    int counter;

    public:
        void itomcout() { counter = 0; }
         void setprice();
         void getprice();
};

void shop ::setprice(){

    cout << "Enter the itom code" << (counter + 1) << endl;
    cin >> itom[counter];
    cout << "Enter the price" << (counter + 1) << endl;
    cin >> itomPrice [counter];
    counter++;
}

void shop :: getprice(){

    for (int i = 0; i < counter; i++)
    {
        cout << itom[i] << endl<< itomPrice[i] << endl;
    }
    
}

int main(){

    shop vishal;
    vishal.itomcout();
    vishal.setprice();
    vishal.getprice();

    return 0;
}

      
