#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(int n){
   // int count=0;
    if (n<2){
        return false;
    }
    for (int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
       return true;
}

int main(){
  int i,lower,upper;
   cout<< "give value of lower & upper"<<endl;
   cin >>lower>>upper;

    for (i=lower;i<=upper;i++){
        if(is_prime(i)){
            cout <<i<<" ";
        
        }
    }
}
