#include <iostream>
#include <vector>
using namespace std;
void print ( vector<int>harsh){
    cout << " printing vetor "<< endl;
    int size =harsh.size();
    for ( int i=0;i<size;++i){
        cout << harsh[i]<<" ";
    }
    cout << endl;
}
int main ( ){
     vector <int> harsh;
     int n ;
     cout <<" give the no of elements "<< endl;
     cin >> n;
     for (int i=0;i<n;i++){
        int data;
        cout <<"give value of data "<<endl;
        cin >> data ;
        harsh.push_back(data);
     }
  
  print(harsh);

// CLEARING VECTOR ( its size not the capacity )
harsh.clear();
for ( int i=0;i<3;++i){
    harsh.push_back(69);
}
cout << " after clearing remaining vector "<< endl;
print (harsh);

}