#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int>harsh;
    harsh.push_back(10);
    harsh.push_back(20);
    harsh.push_front(0);
    harsh.push_back(30);

    list<int>harsh2;
    harsh2.push_back(100);
    harsh2.push_front(50);
    harsh2.push_back(150);
    harsh2.push_front(0);

    harsh.swap(harsh2);
    harsh.insert(harsh.begin(),69);
    list<int> :: iterator it = harsh.begin();
    while(it != harsh.end()){
        cout << *it << " ";
        it++;
     }
    cout << endl;
    cout << harsh2.size()<<endl;
    harsh2.erase(harsh2.begin(),harsh2.end());
cout << harsh2.size()<<endl;
}