#include <iostream>
using namespace std;

void rowWise_insertion(int arr[][3],int rowSize,int columnSize){
   for (int r=0;r<rowSize;r++){
        for (int c=0;c<columnSize;c++){
            cout << " Enter the value for ("<<r<<","<<c<<"):";
            cin >> arr[r][c];
        }
     }
}
void columnwise_Insertion(int arr[][3],int rowSize,int columnSize){
    for (int c=0;c<columnSize;c++){
        for (int r=0;r<rowSize;r++){
            cout << "Enter the value for ("<<r<<","<<c<<"):";
            cin >> arr[r][c];
        }
    }
}
void print(int arr[][3],int rowSize,int columnSize){
//PRINT ARRAY 
for (int r= 0;r<rowSize;r++){
    cout << "row no"<<r<<" ->>";
    for (int c=0;c<columnSize;c++){
        cout << arr[r][c]<< " ";
    }cout << endl;
    }
}

int main (){
     int arr[2][3];
     int rowSize =2;
     int columnSize = 3;
  //rowWise_insertion(arr,rowSize,columnSize);
  columnwise_Insertion(arr,rowSize,columnSize);
print (arr,rowSize,columnSize);


    return 0;
}