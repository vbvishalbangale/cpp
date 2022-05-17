#include <iostream>
using namespace std;


class binary{
    string c;
public: 
    void input_binary(void);     
    void check_binary(void);
    void ulta_kardo_binary(void);
    void display_binary(void);
};

//? ye function humne binary number input karne ke liye banaya hai
void binary :: input_binary(void){
    cout << "Enter your binary number"<<endl;
    cin >> c;
}

//? ye function check karne ke liye banaya hai ki wo binary hai ya nahi
//? agar wo binary nahi hai to program cout karke exit karlega
void binary :: check_binary(void){

    for (int i = 0; i < c.length(); i++)   {
        if (c.at(i)!='0' && c.at(i)!='1'){
            cout<<"Invalid binary number!"<<endl;
            exit(0);
        }   
    }
}


//? ye function humne binary number ko ulta karne ke liye banaya hai
//? agar wo 1 hai to 0 kardo warna 1 kardo
// if condition use karke

void binary :: ulta_kardo_binary(void){
    for (int i = 0; i < c.length(); i++)
    {
        if(c.at(i) == '1'){
            c.at(i) = '0';
        }
        else {
            c.at(i) = '1';
        }
    }
}

//? simply ye function hamari string ko display karane ke liye
void binary :: display_binary(void){

    cout << "Diplaying binary number" << endl;
   
    for (int i = 0; i < c.length(); i++)
    {
        cout << c.at(i);
    }
    cout<<endl;
}

int main(){

    binary vishal;

    vishal.input_binary();
    vishal.check_binary();
    vishal.display_binary();
    vishal.ulta_kardo_binary();
    vishal.display_binary();

    return 0;
}