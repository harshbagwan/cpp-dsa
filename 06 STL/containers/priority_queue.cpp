#include <iostream>
#include <queue>
using namespace std;
int main (){
    priority_queue<int> pq;
pq.push(20);
pq.push(30);
pq.push(40);
pq.push(10);

pq.pop();
cout << pq.top()<< endl;
cout << pq.size()<< endl;

while (!pq.empty()){
    cout << pq.top()<< " ";
    pq.pop();
}
cout << endl;
}