#include <iostream>
using namespace std;
class stack{
    int top1;
    int top2;
    int size ;
    int*arr;
    public:
stack(int capacity){
    size = capacity;
    top1 = -1;
    top2 =size;
    arr = new int[capacity];
}

void push1(int val){
    if (top2-top1 <=1){
        cout << "Stack overflow"<< endl;
    }
    else {
        top1 ++;
       arr[top1]=val;
    }
}
void push2(int val){
    if (top2-top1 <= 1){
        cout << "Stack overflow"<< endl;
    }
    else {
        top2--;
        arr[top2]= val;
    }
}
void pop1(){
    if (top1 == -1){
cout << " Stack underflow"<< endl;
    }
    else {
        arr[top1]=0;
    top1--;
    }
}
void pop2(){
    if (top2 == size){
        cout << "stack underflow"<< endl;
    }else {
       arr[top2]=0; 
    top2++;
    }
}
void print(){
    cout << "top1:"<< top1<<endl;
    cout << "top2:"<< top2<<endl;
    for (int i =0;i<size;i++){
        cout << arr[i]<< " ";
    }cout << endl;
}
};
int main(){
    system("cls");
    stack s(5);
    s.push1(69);
   // s.print();
    s.push2(99);
    s.pop1();
   // cout << "hi "<<endl;
   // s.print ();
    s.push2(1);
    s.print ();
    return 0;
}