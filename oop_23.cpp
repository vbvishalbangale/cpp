#include <iostream>
using namespace std;

class A{
    int a;
    public:

    //! aap void setdata uske jaga pr aisa bhi use kar sakte ho
       
    
       // A & setData(int a){
        void setData(int a){

            // abhi aap aise kr rahe ho to garbage value print ho rahi hai 
            // garbaje value print nahi honi chahiye esliy aapko ek opertor 
            // oh lagana padega this-> aisa karke

            this-> a= a;



        }
        
        void getData(){

            cout << a;
        }
};

int main(){

    A vishal;
    vishal.setData(5);
    vishal.getData();

    return 0;
}