#include <iostream>
using namespace std;

//! Array of object humne eas code mai aisa
//! kiya hai id liye hai or input ke liye for loop chalaya hai


class employee{

        int id;
        int salary;

    public:
        void setId(){

            cout << "Enter id no :";
            cin >> id;
        }
        void getId(){

            cout << "The id is employee :" << id << endl;
        }
};

//! agar aaplo 100 employe ka inpute unako id puchani hai to for loop chalay array mai niche dekhe

int main(){

    employee no [4];

    for (int i = 1; i <= 4; i++)
    {
        no[i].setId();
        no[i].getId();
    }
    

  

    return 0;
};