#include <iostream>
#include <algorithm>
using namespace std;
// void reverseArray(int arr[],int n){
//     int l=0, h=n-1;
//     while (l<h){
//         swap ( arr[l++],arr[h--]);
//       //  l++;
//        // h--;
//     }
// }
 int main (){

    int  arr[7]={ 10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof (int);
   // reverseArray( arr,n);
   reverse( arr,arr+7);  // REVERSE USING STL LIBRARY
    for ( int i=0;i<n;i++){
        cout << arr[i]<< endl;
    }
}