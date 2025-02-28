#include <iostream>
#include <vector>
using namespace std;
void print_array(int a[],int n){
    cout << " array elements are"<< endl;
    for (int i=0;i<n;i++){
        cout << a[i]<< endl;
    }
}
int main(){
// static memory allocation of array 
// int arr[5]= {1,2,3,4,5};

// DYNAMIC 
int n ;
cout << " give the size of array"<< endl;
cin >> n;
int *arr=new int[n];
for ( int i=0;i<n;i++){
    //int data;
    cout <<" give value of index no:"<<i<<endl;
    cin >> arr[i];
}
arr[n]=65;
arr[n+1]=65;
arr[n+2]=65;
arr[n+3]=65;
arr[n+4]=65;
arr[n+5]=65;
arr[n+6]=65;
arr[n+6]=65;
arr[n+7]=65;
arr[n+8]=65;
arr[n+9]=65;
arr[n+10]=65;
arr[n+11]=65;
print_array ( arr,n);
cout << arr[n];
cout<<arr[n+1];
cout<<arr[n+2];
cout<<arr[n+3];
cout<<arr[n+4];
for ( int i=5;i<n+12;i++){
    cout << arr[i]<< endl;
    
}

}
