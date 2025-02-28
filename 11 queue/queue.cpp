#include <iostream>
using namespace std;
class queue {
    private :
    int *arr;
    int n;
    int front ;
    int rear;
    public:
queue (int size){
    arr = new int[size];
    n = size;
    front =-1;
    rear =-1;
}
void push(int val){
    if (rear == n-1){
        cout << " Overflow"<< endl;
    }
    else if(front ==-1 && rear ==-1) {
        //inserting first element
        front ++;
        rear ++;
        arr[rear]=val;
    }
    else {
       // Normal flow
        rear ++ ;
        arr[rear]= val;
    }
}
void pop(){
    if (front == -1 && rear ==-1){
        //queue is empty
        cout << "Underflow"<< endl;
    }
    else if(front==rear){
        //single element // if front == rear
        arr[front]=-1;//this step is not important
        front =-1;
        rear=-1;
    }
    else{
        // normal flow //( pop in queue )
        arr[front]=-1;
        front++;
    }
}
int getFront(){
    if (front ==-1){
        cout << " queue is empty"<< endl;
        return -1;
    }
    else {
        return arr[front];
    }
}
int getRear(){//hw
    return arr[rear];
}
int getSize(){
    // No of element inside a queue
    if (front ==-1&& rear == -1){
        return 0;
    }
    else {
    return rear-front+1;//4-1+1 formula by diagram   
    }
}
bool isEmpty(){
    if (front == -1&&rear ==-1){
        return true;
    }
    else {
        return false;
    }
}
};


int main (){
    queue Q(5);
    Q.push(69);
    Q.getSize();


    return 0;
}