#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void printDouble (int a){
    cout << 2*a<<" ";
}


bool checkeven(int a){
    return a%2==0;
}

int main (){
    vector <int> arr(6);
    arr[0] =11;
    arr[1]= 20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=11;
    arr.at(5)=69;

for_each(arr.begin(),arr.end(),printDouble);
cout << endl;

int target =40;
   // vector<int>::iterator it= find(arr.begin(),arr.end(),target);
   auto it = find (arr.begin(),arr.end(),target);// find function returns iterator 
   cout << *it << endl;

  auto it2= find_if (arr.begin (),arr.end(),checkeven);// jo bhi pehla even hoga return karega
  cout << *it2<< endl;

int target2 = 11;
int ans = count (arr.begin(),arr.end(),target2);
cout << ans;
cout << endl;
int ans2 = count_if(arr.begin(),arr.end(),checkeven);
cout << ans2<< endl;

sort(arr.begin(),arr.end());
//print kara rahe h abb
for ( int i:arr){
    cout << i<< " ";
}
cout << endl; 
reverse (arr.begin(),arr.end());
for (int i : arr){
    cout << i<< " ";
}
cout << endl;
rotate (arr.begin(),arr.begin()+3,arr.end());
for (int i : arr){
    cout << i << " ";
}
cout << endl;

cout << " after sorting  :-  ";
sort (arr.begin(),arr.end());
for (int i:arr){
    cout << i<< " ";
}
cout << endl;

cout << "AFTER APPLYIN UNIQUE AND DELETING DUPLICATE ELEMENTS -->";
vector <int> :: iterator it3 = unique (arr.begin(),arr.end());
arr.erase ( it3 , arr.end());
for ( int i: arr){
    cout << i << " ";
}
cout << endl;
auto it4 = partition ( arr.begin() ,arr.end(),checkeven);// i dont know why we saved partition iterator 
// for (int a: arr){
//     cout << a<< " ";
//     }
cout << " partition first part -->" ;
for ( auto it = arr.begin();it != it4;++it){
    cout << *it<< " ";
}
cout << endl;
cout<<"partition second part -->";
for (auto it = it4;it != arr.end();++it){
    cout << *it << " ";
}



return 0;
}
