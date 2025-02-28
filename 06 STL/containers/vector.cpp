#include<iostream>
#include <vector>
using namespace std;

int main(){
vector <int> marks;

vector <int> miles(5,0);
cout<< *(miles.begin())<<endl;
cout << *(miles.end()-1)<<endl;// derefrencing (miles.end()) by * is undefined in c++ 
//if we have to access last element in c++ then we can just do -1 from last address
cout << miles.front()<<endl;
cout << miles.back()<<endl;
miles[0]=69;//initially block assign hona chaiye 
cout << miles[0]<<endl;
cout << miles.at(0)<<endl;
if (miles.empty()==true){
    cout << "vector is empty"<<endl;
}
else {
    cout << " vector is not empty"<< endl;
}

cout<< miles.size()<<endl;
cout << miles.capacity()<<endl;
miles.clear();
cout << miles.size()<<endl;
cout << miles.capacity()<<endl;
marks.insert(marks.begin(),68);
cout << marks.at(0)<<endl;
miles.erase(miles.begin(),miles.end());
cout << miles.size()<< endl;

vector <int > distance(10,-1);

vector<int> first;
first.push_back(10);
first.push_back(20);
first.push_back(30);

vector<int>second;
second.push_back(100);
second.push_back(200);
second.push_back(300);

first.swap(second);

cout << " first wala print"<< " ";
// for (auto it:first){
//     cout << it<<" ";
// }
for (int i:first){
    cout << i<< " ";
}

}