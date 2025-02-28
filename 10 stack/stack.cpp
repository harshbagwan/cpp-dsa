#include <iostream>
using namespace std;
class stack {
    public:
    int *arr;
    int size;
    int top;
     
    stack(int capacity){
        arr = new int[capacity];
        size = capacity;
        top = -1;
    }
void push (int val){
    if (top == (size-1)){
        cout << " Stack Overflow"<< endl;
    }
else {
    top ++;
    arr[top]=val;
}
}
void pop(){
    if (top == -1){
        cout << " stack underflow"<< endl;
    }
    else {
   arr [top]= -1;
    top --;
    }
}
int getSize(){
    return top+1;// array index zero se start hoga 
}
bool isEmpty(){
    if (top == -1){
        return true;
    }
    else {
        return false ;
    }
}
int getTop(){
    if (top == -1){
        cout << " there is no element at the top,as stack is empty"<< endl;
        return -1;
    }
    else {
        return arr[top];
    }
}
void print (){
    for (int i = 0;i<size;i++ ){
        cout << arr[i]<< " ";
    }cout <<endl<< endl;
   // cout << endl;
}
};

int main (){
    system("cls");
    stack objS (5);
    objS.print ();
    objS.push(69);
    objS.print ();
    

    return 0;
}