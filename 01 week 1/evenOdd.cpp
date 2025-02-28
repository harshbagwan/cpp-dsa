#include <iostream>
using namespace std;
void checkternary1(){
int n;
cout << "give value of n"<< endl;
cin >> n;
cout << ((n&1)?"odd no":"even no")<<endl; // odd no ke case me true dega kyoki odd ki LSB 1 hoti hai 
}

void checkternary2(){
    int n;
    cout << " give value "<< endl;
    cin >> n;
    cout<<((n%2)?"odd":"even")<<endl;//odd ke case me true h kyoki remainder 1 aaygea 2 se divide karne pe
    
}
int main (){
    checkternary1();
    checkternary2();
    return 0;
}