#include<iostream>

using namespace std;

//? call by referance

// Not swap in this code




void swapPointer ( int a, int b){

    int temp = a; /// abhi humne temp mai a ki value store kiy hai =  5
    a = b; // ya pe humne b ki value a mai store kiy hai (b ki value 4 thi oh a mai chali gayi)
    b = temp; // ya pe b mai temp ki value store kiy hai ( temp ki value mai humne a ki dali //
    //hai elsiye oh 5 thi oh humne b mai dal lii)

    //! to ans mai hume a mai 4 or b mai 5 value aani chahiye
    //! pr nahi aa rahi hai eska karan hai oh value swap nahi hou adla badal nahi hou
};
    int main()
    {

        int a = 5;
        int b = 4;
        swapPointer(a, b);
        cout << a<< " --- "<< b;

        return 0;

}