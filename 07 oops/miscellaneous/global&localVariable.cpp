#include <iostream>
using namespace std;

int x= 2;
int main (){
    system ("cls");
x=20;
int x= 4;
cout << x<< endl;
cout << ::x<< endl;

{ 
    int x = 50 ;
    cout << x << endl;
    cout << :: x<< endl;
}
    return 0;
}