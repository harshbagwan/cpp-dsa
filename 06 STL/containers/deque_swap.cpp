#include <iostream>
#include <queue>
using namespace std;

int main (){
    deque <int> dq ;
    dq.push_back(10);
    dq.push_front(0);
    deque<int>dq2;
    dq2.push_back(100);
    dq2.push_front (0);

    dq.swap(dq2);
    deque<int> ::iterator it= dq.begin();
    while(it !=dq.end()){
        cout << *it<< " ";
        it++;
    }
    cout << endl;

}