#include<iostream>

using namespace std;

//!static data member


class employee{

    
        int id;

        //? static member is by default initialize by 0 we cant initialize that here
        static int count; // aapko count 10 se ya 100 se shuru karna hai to aab
        // to aapne jo niche int ke  uppar funtion liya hai vapa pe karna padega aisa count = 100;
        // agar aapn static int count = 100 karte hai uppar to erro aa jayega niche he lena padta hai

    public:

        void setData(){

            cout << "Enter the id" << endl;
            cin >> id;
            count++;
                }
        void getdata(){

            cout << "The id of employee is "<<id << endl<<"The employee number is "<<count;
        }
};

int employee :: count =100;

int main(){

    employee vishal;
    vishal.setData();
    vishal.getdata();

        return 0;
}