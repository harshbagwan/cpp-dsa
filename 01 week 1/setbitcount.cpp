#include <iostream>
using namespace std ;
int main( ){
    int number =4;
    int setBitcount =0;
    while (number !=0){
        int lastbit = (number&1);
        if (lastbit==1)
            setBitcount = setBitcount +1;
        number =number>>1;
    }
    cout << setBitcount<< endl;
return 0; 
}
// int main( ){
// int n=1001;
//     int setbit =0;
//     int zerobit =0;
    
//         while ( n>0){
//         if (n&1==1){
//             setbit=+1;
//         }
//         else {
//         zerobit =+1;}
//         n=n>>1;
//         }
//         cout << setbit << " "<< zerobit << endl;

//     }
