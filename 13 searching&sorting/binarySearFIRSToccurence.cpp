#include <iostream>
using namespace std;

void findFirstOccurence (int arr[],int n,int target,int &AnswerIndex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<=e){
        if (arr[mid]==target){
//Answer found may or may not be first occurence 
//store and compute
    AnswerIndex = mid;
// kyoki first index ki baat ho rahi h to 
// left me jayenge na ki right me
    e = mid-1;
    }
if (target > arr[mid]){
    s = mid +1;
}

if (target < arr[mid]){
    e = mid -1;
}
// bhul jate h
mid = s + (e-s)/2;

    }
}

int main (){
    system ("cls");
    int arr[]= {20,20,20,20,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 30;
    int AnswerIndex =-1;
    findFirstOccurence(arr,n,target,AnswerIndex);
     cout <<"first occurence index of "<< target<<":"<< AnswerIndex;
    return 0;
}