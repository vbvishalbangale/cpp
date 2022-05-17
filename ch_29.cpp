//! Agar apane uppar int mai value de di hai or aapko  uski value change karni hai to aap 
//!direct cout ke uppar likhar change kar skate hai
//!niche dekhe code dekhakar saamj jayoge

#include <iostream>

using namespace std;

//  agar dekho hum [1] mai 25 value de hai or hum cout ke uppar likh denge to value change ho jayegi
//!run kar ke cheack kare

int main()
{

    int marks[] = {20, 25, 34, 34};

    cout << marks[0] << endl;
    marks[1] = 500;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;

    return 0;
}
