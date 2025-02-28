//MIN HEAP -> MIN VALUE -> MAX PRIORITY
#include <iostream>
#include <queue>
using namespace std;
int main (){
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(100);
    pq.push(200);
    pq.push(300);
    pq.push(330);
    cout << "top element "<<pq.top()<< endl;
    cout <<"size"<<pq.size()<<endl;
    cout << "QUEUE ELEMENTS"<< " " ;
    while(!pq.empty()){
        cout << pq.top()<< " ";
        pq.pop();
    }
    cout << endl;

}