#include <iostream>
using namespace std;
void rotateArray(int arr[],int size,int shift){
    int finalShift = shift % size;// remainder se matlab hai 
    if (finalShift == 0){
        cout << " NO need to shift"<< endl;
    }

    int temp[1000];
    int index =0;
    for (int i = size-shift;i<size;i++){
        temp[index]=arr[i];
        index ++;
    }

for (int i = size-1;i>=0;i--){
    arr[i]=arr[i-finalShift];
}

for (int i =0 ;i<finalShift;i++){
    arr[i]=temp[i];
}
}
int main(){
    int arr[6]={10,20,30,40,50,60};
    int size =6;
    int shift = 2;
    cout << "before shifting"<< endl;
    for (int i =0;i<size;i++){
        cout << arr[i] <<" ";
    }cout << endl;

    rotateArray(arr,size,shift);

    cout << " after shifting"<< endl;
    for (int i =0;i<size;i++){
        cout << arr[i]<< " ";
    }cout << endl;
 return 0;
}