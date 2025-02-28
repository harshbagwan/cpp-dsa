#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    system("cls");
    vector <int> arr ;
    arr.push_back(22);
    arr.push_back( 11);
    arr.push_back( 55);
    arr.push_back( 66);
    arr.push_back( 77 );

make_heap(arr.begin(),arr.end());//o[n]time 
for (int i: arr){
    cout << i <<" ";
}cout << endl;

arr.push_back(99);
push_heap (arr.begin(),arr.end());//log[n] time 
for (int i: arr){
    cout << i <<" ";
}cout << endl;

pop_heap(arr.begin(),arr.end());
for (int i :arr){
    cout << i << " ";
}cout << endl;
arr.pop_back();
for (int i :arr){
    cout << i << " ";
}cout << endl;

sort_heap(arr.begin(),arr.end());
for (int i:arr){
    cout << i<<" ";
}
    return 0;
}