#include<iostream>
using namespace std;
int main (){
    char arr[5];
    fill(arr,arr+4,65);
    cout << arr[0]<< " "<< arr[1]<< " "<< arr[2]<<" "<<arr[3]<< endl;
    return 0;
} 

// int main() {
//  char arr [3];
//  fill ( arr,arr+3,5);
//  cout<< arr[0]<< endl;
//  cout << arr[1]<< endl;
// cout << arr[2]<< endl;
//     return 0;
// }