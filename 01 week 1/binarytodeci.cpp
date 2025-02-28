#include <iostream>
#include <cmath>
using namespace std;
int binarytodeci(int n){
    int deci =0;
    int i=0;
    while(n>0){
        int bit = n%10;
        deci = deci + bit * pow(2,i++);
        n/=10;
    }
    return  deci;
}
int main (){
    int n ;
    cout << "give value"<< endl;
    cin >> n;
    int deci= binarytodeci(n);
    cout << deci;
    return 0;
}