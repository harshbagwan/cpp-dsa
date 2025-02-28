#include <iostream>
#include <limits.h>
using namespace std;
int find_minimumElement(int arr[][3],int rowSize,int colSize){
    int ans = INT_MAX;
    for (int r=0;r<rowSize;r++){
        for (int c=0;c<colSize;c++){
            // if (arr[r][c]<ans){
            //     ans = arr[r][c];
            ans = min(ans,arr[r][c]);
            }
        }
// }
    return ans;
}
int main (){
int arr[3][3]={2,3,4,5,5,6,7,8,9};
int rowsize=3,colsize=3;
cout << find_minimumElement(arr,rowsize,colsize);
    return 0;
}