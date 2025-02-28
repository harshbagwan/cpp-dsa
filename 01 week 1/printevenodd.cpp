#include <iostream>
using namespace std;
void printodd(int start,int end);
void printeven(int start,int end){
    for ( int i=start; i<=end;i++){
       // int n=i;
    if(!(i&1))
     cout << i << endl;
}
}

int main (){
    printodd(50,58);
    printeven (1,10);
    return 0;
}

//FOR ODD

void printodd(int start,int end){
    for ( int i=start ;i<=end;i++){
        if ( i&1)
        cout<< i<<endl;
    }
}