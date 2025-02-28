#include <iostream>
//#include < algorithm>
using namespace std;
int main (){
    int a=5,b=6;
    // (1) swap(a,b);

    // (2) TEMP VARIABLE
    //int temp =a;
    // a=b;
    // b=temp;

// (3)ARITMATIC METHOD
    // a=a+b;
    // b=a-b;
    // a=a-b;

// (4)XOR BITWISE METHOD 
    //int a=5;b=6;
    a=a^b;
    b=b^a;
    a=a^b;
    cout << a << " "<< b << endl;
}