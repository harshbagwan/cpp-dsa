#include <iostream>
using namespace std;
bool checkTwosum(int arr[],int n,int target){
    for (int i =0;i<n;i++){
    for (int j = 0;j<n;j++){
        if (arr[i]+arr[j]==target){
            return true;
        }
    }
}
return false;
}
int main (){
    int arr[5]= {10,20,30,40,50};
    int n=5;
    int target =60;
    bool ans = checkTwosum(arr,n,target);
    if (ans ==true ){
    cout << "pair found"<<endl;
    }
    else {
    cout << "pair not found"<< endl;
    }
    return 0;
}