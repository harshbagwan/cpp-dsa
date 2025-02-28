// if second array is allowed to create for doing transpose of a matrix
#include <iostream>
#include <limits.h>
using namespace std;
void transpose (int arr[][3],int rowsize ,int colsize){
    for (int i =0;i<rowsize;i++){
        for (int j =i;j<colsize;j++){
swap(arr[i][j],arr[j][i]);
        }
    }

for (int i =0;i<rowsize;i++){
    for (int j =0;j<colsize;j++){
        cout << arr[i][j]<< " ";
    }cout << endl;
}
}



int main (){
int arr[3][3]= {
    {1,2,3},
    {1,2,1},
    {4,1,2}
};
int rowsize=3,colsize=3;
transpose(arr,rowsize,colsize);
    return 0;
}