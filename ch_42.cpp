#include<iostream>

using namespace std;

//?function

//! funtion aisa hota hai jo humko int main ke uppar
//! likhana padta hai funtiojn humko code ke tukde kr deta hai f
// funtion ko hum cout mai bhi declare kar sakte hai direac 
// humne function mai return c kiya to c sum mai aayegi or niche humne sum print kiya hai

//! funtion ko aap uppar bhi likh sakte hai int main ke or int main ke code  ke niche bhi pr
//! pr aapko niche likhana hai to aapko uska naam uppar declare  karna pade int main ke


int sum(int a, int b){

    int c = a + b;

    return c;
};

int main(){

    int a;
    int b;

    cout << "Enter the number first";
    cin >> a;

    cout << "Enter the number secodn";
    cin >> b;

    cout << "The sum is a or b is " << sum(a, b);

    return 0;

}