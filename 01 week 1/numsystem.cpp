// #include <iostream>
// using namespace std;

// int decimalToBinaryMethod(int n){
//     //DIVISION METHOD
//     while(n>0){
//         int bit = n%2;
//         cout << bit<< endl;
//         n=n/2;
//     }
//     return 0;

// }

 //int main(){
//     int n;
//     cin >> n;
//     int binary= decimalToBinaryMethod(n);
//     return 0;
// }

/*  CODE WITH ARRANGEMENT OF DIGITS ( REVERSED FROM BOTTOM)*/
// #include <iostream>
// #include <cmath>
// using namespace std;

// int decimalToBinaryMethod(int n){
//     //DIVISION METHOD
//     int binaryno = 0;
//     int i =0;
//     while(n>0){
//         int bit = n%2;
//         binaryno= bit*pow(10,i++)+binaryno;
//         n=n/2;
//     }
//     return binaryno;


// int main(){
//     int n;
//     cin >> n;
//     int binary= decimalToBinaryMethod(n);
//     cout<< binary ;
//     return 0;
// }


//  METHOD 2

// #include <iostream>
// #include <cmath>
// using namespace std;
//  int decimaltobinarymethod2(int n){
//      // BITWISE METHOD 
//      int binaryno =0;
//      int i=0;
//      while ( n>0){
//         int bit = n&1;
//         binaryno= bit * pow(10,i++)+binaryno;
//         n=n>>1;
//      }
//      return binaryno;
//  }
    
//     int main (){
//         int n;
//         cin >> n;
//         int binary= decimaltobinarymethod2(n);
//         cout << binary; 
         
//     }

/* BINARY 
   TO 
   DECIMAL */

   #include <iostream>
   #include <cmath>
   using namespace std ;
   int binarytodecimal(int n){
    int decimal =0;
    int i=0;
    while (n){
        int bit = n% 10; 
        decimal = decimal + bit*pow(2,i++);
        n/=10;
   }
   return decimal;
   }
int main( ){
    int binaryno;
    cin >> binaryno;
    int decimal =binarytodecimal(binaryno);
    cout << decimal;
}