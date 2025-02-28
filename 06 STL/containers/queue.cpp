#include<iostream>
#include <queue>
using namespace std;
int main (){
    queue<int> harsh;
    queue<int> harsh2;
    harsh.push(10);
    harsh.push(20);
    harsh.push(30);
    harsh.pop();

    harsh2.push(100);
    harsh2.push(200);
    harsh.swap(harsh2);
    
    while(!harsh.empty()){
        cout <<harsh.front()<<" ";
        harsh.pop();
            } 
            cout<< endl;

            return 0;

}