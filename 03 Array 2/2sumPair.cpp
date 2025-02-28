#include <iostream>
using namespace std;
pair <int,int> checkTwosum(int arr[],int n,int target){
    pair <int,int> sum = make_pair(-1,-1);
    // if no pair found it will set to -1,-1 
    bool flag = 0;
    for (int i =0;i<n && !flag ;i++)
    //___________________^^^^^^_______
    {
    for (int j = 0;j<n;j++){
        if (arr[i]+arr[j]==target){
            sum.first = arr[i],sum.second= arr[j];
            flag = true;
          break;
           //return sum;
        }
    }
}
return sum;
}
int main (){
    int arr[5]= {10,20,30,40,50};
    int n=5;

    int target ;
    cout << "give target :"<< endl;
    cin>> target;
    pair <int,int> sum = checkTwosum(arr,n,target);

   if (sum.first==-1 && sum.second == -1){
    cout << " pair not found"<<endl;
   }
   else {
    cout << "pair is "<< sum.first <<","<<sum.second ;
   }
    return 0;
}