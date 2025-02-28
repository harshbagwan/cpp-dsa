

#include <iostream>
//#include <algorithm>
using namespace std;

void multiplyBy10(int arr[],int n){
    for ( int index =0; index<n;index++)
       arr[index]*=10;
}
void print ( int arr[],int size){
    for ( int index = 0;index < size;index++)
      cout<< arr[index]<< " ";
}

int main(){
    int arr[100];
    int NoOfElement;
    cout<< "give no of element"<< endl;
        cin >> NoOfElement;
    for (int i=0;i<NoOfElement;i++){
        cout << "give the value in index no :" <<i<< endl;
         cin>> arr[i];
          }
          multiplyBy10( arr,NoOfElement);
          print( arr,NoOfElement );
}