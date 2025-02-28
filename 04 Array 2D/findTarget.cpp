#include <iostream>
using namespace std;

bool checkTarget(int arr[][3],int rowSize,int columnSize,int target){
    for (int r =0;r<rowSize;r++){
        for (int c=0;c<columnSize;c++){
            if (arr[r][c]==target){
                return true;
            }
        }
    }
    return false;
}

int main (){

int arr[3][3] = { 
    {1,2,3},
    {33,44,55},
    {66,68,69}
};
int rowSize =3,columnSize =3;
int target = 69;

bool result =checkTarget(arr,rowSize,columnSize,target);
if (result == true){
    cout << " target found "<< endl;
}
else {
    cout<< " target not found "<< endl;
}
    return 0;
}