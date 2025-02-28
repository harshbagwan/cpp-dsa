#include <iostream>
#include <limits.h>
using namespace std;
void rowsum (int arr[][3],int rowSize,int colSize){
    for (int r=0;r<rowSize;r++){
    int sum =0;
        for (int c=0;c<colSize;c++){
    sum += arr[r][c];
            }
            cout << sum<< endl;
        }
        //TC : O(n^2)
//SC : O(1)
}

int diagonal_sum(int arr[][3],int rowsize){
    int sum=0;
    for (int i=0;i<rowsize;i++)
            sum += arr[i][i];
    return sum;
}
int antiDiagonal(int arr[][3],int rowsize){
    int sum2 =0;
    for (int i =0;i<rowsize;i++){
        sum2 += arr[i][rowsize-1-i];
    }
return sum2;
}

int main (){
int arr[3][3]= {
    {1,2,3},
    {1,2,1},
    {4,1,2}
};
int rowsize=3,colsize=3;
rowsum(arr,rowsize,colsize);
cout << "diagonal sum ->"<< diagonal_sum(arr,rowsize) ;
cout << "\n anti diagonal -"<< antiDiagonal(arr,rowsize);
    return 0;
}