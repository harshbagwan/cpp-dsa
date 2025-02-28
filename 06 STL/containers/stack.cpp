#include<iostream>
#include<stack>
using namespace std;
int main (){
    stack<int> harsh;
    harsh.push(10);
    harsh.push(20);
    harsh.push (30);
    harsh.pop();

    cout << harsh.size()<< endl;
    cout << harsh.top()<< endl;
    if (harsh.empty()==true){
        cout << " stack is empty"<< endl;
    }
    else {
        cout <<" stack is not empty"<< endl;
    }
    while(!harsh.empty()){
        cout << harsh.top()<<" ";
        harsh.pop();
    }
    cout << endl;
}