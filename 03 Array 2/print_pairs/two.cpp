#include <iostream>
using namespace std;
int main (){
    int arr[4] = {10,20,30,40};
    int n =4;


    for (int i =0;i<n;i++){
        for (int j =0;j<=i;j++){
            cout << arr[i]<<","<< arr[j]<<endl;
        }
    }
    return 0;
}