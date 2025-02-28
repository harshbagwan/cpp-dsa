#include <iostream>
#include <vector>
using namespace std ;
void print (vector<int>harsh){
    cout<< " elements in array are:"<< " ";
    int size =harsh.size();
    for ( int i=0;i<size;i++){
        // cout << harsh[i]<< " ";
        cout << harsh.at(i)<<" ";
    }
    cout << endl;
}
int main (){
vector<int >harsh;
int n ;
cout << "give the value of elements you want to push"<< endl;
cin >> n;
for ( int i=0;i<n;++i){
    int data;
    cout << " give the value of data you want to push"<< endl;
    cin >> data;
    harsh.push_back(data);
}
print (harsh);
for (int i=0;i<2;i++){
    harsh.push_back(69);
}
print (harsh);
}