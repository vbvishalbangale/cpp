#include <iostream>
using namespace std;

class Employee {

    int id;

    // static variable jo hai class se jud jata hai
 
    static int count; // by default iski value 0

public:
        void setData(void)
        {
            cout << "Enter the id of employee ";
            cin >> id;
            count++;
        }
        void getData(void){
            
            cout << "The id of employee is " << id << endl;
            cout << "and this is employee no : " << count << endl;
        }
};

// static variable class ke saath kaam karta hai
// aur har object ke liye static variable ki value save ho jati hai


int Employee ::count;  

int main(){

    Employee vishal,gaurav,shoeb,ashwin;

    vishal.setData();
    vishal.getData();
    cout << endl;
    
    gaurav.setData();
    gaurav.getData();
    cout << endl;
    
    ashwin.setData();
    ashwin.getData();
    cout << endl;
     
    shoeb.setData();
    shoeb.getData();
    cout << endl;
    

    


    return 0;
}