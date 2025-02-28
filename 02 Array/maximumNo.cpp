#include <iostream>
#include <limits.h>
using namespace std;

int findmax(int arr[],int size){
        int ans = INT_MIN;
    for (int i=0;i<size;i++){
        if (arr[i]>ans)
        ans = arr[i];
    }
    return ans;
}
int main (){
int arr[5]={1,2,3,4,5};
int size =5;
cout << findmax(arr,size);

    return 0;
}