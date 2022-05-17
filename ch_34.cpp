#include <iostream>

using namespace std;

int main()
{

    int marks[] = {12, 23, 34, 45};

    int *p = marks;

    cout << *(p++) << endl; // abhi yaha pe aap bolege hai kaise hoova to ab dekho 
    //dhyan se 0---> ya pe kya hoova p mai pehli value thi *p = marks matlab pehli value 
    //p mai chali gayi to kya hoova first value 24 hai to ohh print hoovi or humne
    // cout mai aisa likha *(p++)  decrement opertror ismai kya hota hai aabhi hum age p ki
    // value print karengo to oh humko uske aage ki value print kareyega
    // abhi p++ matlab ohh ek se badh gayi hai hum aage print karenge to 23 value print hogi pr 
    // pr humne kya kiya *(++p ) kr diya matlab kya hoova ohh pehle p++ ki vajah se badh hee gayi thi
// or humne or use ++p krke badha di isliye oh 2 se badh gayi or 34 value print ho rahi hai

    cout << *(++p)<<endl;

    return 0;
}