#include <iostream>
using namespace std;
class deque {
    int *arr;
    int n;
    int front;
    int rear;
    public:
    deque(int size){
        this -> n = size;
        arr = new int [size];
        fornt = -1;
        rear =-1;
    }
 void pushFront(int val){
    if (front == 0){
        cout << "overflow"<< endl;
    }
    else if (fornt ==-1 && rear ==-1){
        fornt ++;
        rear++;
        arr [front]=val;
    }
    else {
        fornt --  ;
        arr[front]=val;
    }

 }
void pushBack(int val){
    if (rear ==n-1){
        cout << "Overflow"<<endl;
    }
    else if (front == -1 && rear == -1){
        //first element 
        rear ++;
        fornt ++;
        arr [rear]=val;
    }
    else {
        // normal flow
        rear ++;
        arr[rear]= val;
    }
}
void popFront(){
   if (front ==-1&&rear == -1){
    // queue is empty
    cout << " UnderFlow"<< endl;
   }
   else if (front == rear ){
// single element
arr [front]=-1;// or arr[rear]=-1 wese jaruri step to ha nahi yeahh merko pata hai
    front ==-1;
    rear == -1;
   }
   else{
    arr[front] =-1;
    front ++;
   }
    }


void popBack(){
    if (front ==-1&&rear ==-1){
        cout << " Underflow"<< endl;//khali h
    }
    else if(fornt == rear){
        fornt ==-1;
        rear == -1;
    }
    else {
        arr [rear]=-1;// <- jaruri step nahi h
        rear --;
    }
}
};
int main (){
    return 0;
}