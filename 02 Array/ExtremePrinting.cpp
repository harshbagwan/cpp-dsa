#include <iostream>
using namespace std;
void extremePrint ( int arr[],int n){
    int i =0;
    int j = n-1;

// for even elements
    // while (i<=j){
    //     cout << arr[i++]<<" ";
    //    // i++;
    //     cout << arr[j--]<<" ";
    //     //j--;
    // }

    // FOR ODD and even 
    while ( i<=j){
        cout << arr[i++]<<" ";
        //i++;
        if ( j>i){
            cout << arr[j--]<< " ";
            //j--;
        }
    }
}
int main ()
{
    int arr[]={10,20,30,40,50,60,70};
    int size=7;

    extremePrint(arr,size);
}
/*

while ( i<=j){
     if ( i==j){
     cout << arr[i]<< " ";
     i++;
     break;
     }
else {
cout << arr[i]<< " ";
i++;
cout << arr[j]<< " ";
j--}
}


*/ 