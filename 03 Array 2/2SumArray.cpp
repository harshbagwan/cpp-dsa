
#include <iostream>
using namespace std;
void checkTwosum(int arr[],int n,int target,int sum[]){
    sum[0]=-1,sum[1]=-1;
    // if no pair found it will set to -1,-1 
    for (int i =0;i<n ;i++) {
    for (int j = 0;j<n;j++){
        if (arr[i]+arr[j]==target){
            cout << arr[i]<<","<<arr[j]<< endl;
           // sum[0]=arr[i],sum[1]=arr[j]; 
            // or if want to print all pairs use cout << arr[i]","<< arr[j] with void return type
        }
    }
}
}
int main (){
    int arr[5]= {10,20,30,40,50};
    int n=5;
int sum[2];
    int target =60;
checkTwosum(arr,n,target,sum);


//    if (sum[0]==-1 && sum[1]== -1){
//     cout << " pair not found"<<endl;
//    }
//    else {
//     cout << "pair is "<< sum[0]<<" ,"<<sum[1];
//    }
    return 0;
}