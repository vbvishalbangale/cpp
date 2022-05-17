#include <iostream>
using namespace std;

class Employee{
    int id;
    float salary;
    
    

public:
    
    void setData(int id , int salary){

        (*this).id = id;
        this->salary = salary;
    }
    void display(){
        cout << "The id of employee is : " << id << endl;
        cout << "The salary of employee is : " << salary << endl;
    }

};



int main(){

    Employee vb;
    vb.setData(34, 99999.9);
    vb.display();

    return 0;
}