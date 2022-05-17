#include<iostream>

using namespace std;


int main(){

    int marks[] = {12, 23, 34, 45};

    int *p = marks; //---> pointer varibal hai esamai  humne marks ki value adress le liya hai adress menas oh jo value humne dee hai ohh


    cout << *p<<endl;        // poiter p matbal oh first value print karega
    cout << *(p + 1) << endl; // pointer p + 1 matalab usko hume use aage bhej diya matlab p mai first value thi thi p+1 varne se ohh dusri value lega 

    cout << *(p + 2) << endl; // pointer p +2 matbal abhi ohh 3 ri value lega ( note arrya 0 se shuru hota hai)
    cout << *(p + 3) << endl;// pointer p +3 matbal ohh abhi marks mai 4 number ki value lega
    

    return 0;
}