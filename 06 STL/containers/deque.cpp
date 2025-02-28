#include<iostream>
#include<queue>
using namespace std;
int main (){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(15);
    dq.push_front(5);
    dq.push_front(0);

    cout <<dq.size()<<endl;
    cout <<dq.front()<< " "<< dq.back()<< endl;
 
if (dq.empty() == true){
    cout << " deque is empty "<< endl;
}
else {
    cout << " deque is not empty "<< endl;
}
deque <int> :: iterator it = dq.begin();
while(it != dq.end()){
    cout << *it<< " ";
    it++;
    }
    cout << endl;

cout << dq[0]<<endl;
cout <<dq.at(0)<<endl;
cout<<endl;
dq[0]=69;
cout << dq[0]<<endl;
cout<<endl;
dq.insert(dq.begin(),69);
cout << dq[0]<<endl;
cout << dq.front()<< endl;
cout << *dq.begin()<<endl;

dq.erase(dq.begin(),dq.begin());
cout<<dq.size();
}