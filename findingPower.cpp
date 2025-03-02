#include <iostream>
#include <cmath>
using namespace std;

// using pow()
double powerFunction(double base,double exponent)
{
    return pow(base,exponent);
}

int usingLOOP(int base,int exponent)
{
    int result =1;
    for (int i=1;i<=exponent;i++){
        result *=base; 
    }
    return result;
}

int recursion(int base,int exponent){
    if (exponent ==0){
        return 1;
    }
    return base * recursion(base,exponent-1);
}

long long Efficient_method(int base,int exp){
    long long ans = 1;
    while (exp > 0){
        if (exp %2 == 1){
            ans *=base;
        }
        base *=base;
        exp /=2;
    }
    return ans;
}


int main() {
  cout <<  usingLOOP(2,5)<< endl;
  cout << powerFunction(3,4)<<endl;
  cout << recursion(4,5)<<endl;
  cout << Efficient_method(3,9);

 return 0;
}