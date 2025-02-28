#include <iostream>
#include <list>
using namespace std;
int main (){
    list <int> harsh;

    harsh.push_back(10);
    harsh.push_back(20);
    harsh.push_front(0);
    //0->10->20
    harsh.pop_back();
    //0->10
    harsh.pop_front();
    //10
    harsh.push_back(15);
    harsh.push_front(5);
    //5->10->15
    cout << harsh.front()<<" "<<harsh.back()<<endl;
    cout<<harsh.size()<<endl;
  //  harsh.clear();
   cout<< harsh.size()<<endl;
    if (harsh.empty() == true){
        cout<< " list is empty "<< endl;
    }else{
        cout<< "list is not empty"<<endl;
    }
list<int>::iterator it=harsh.begin();
while(it != harsh.end()){
    cout << *it<< " ";
    it++;
}
cout << endl;
harsh.remove(10);
list<int>:: iterator it2 = harsh.begin();
while(it2 != harsh.end()){
cout << *it2<< " ";
it2++;
}
cout << endl;
}