#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
//#include <conio.h> aupported in turbo compiler 

using namespace std;

int main (){

//clrscr; supported in turbo c++

#ifdef _WIN32
system("cls");
#else 
system ("clear");
#endif 

vector <int>arr(5);
//vector <int> arr = {10,20,30,40,50};
arr[0]= 1;
arr[1]= 2;
arr[2]=3;//cant use push_back(3) bcoz it will increase the size of vector
// rather than using our predefined size of 5 elements
arr[3]= 4;
arr[4]= 5;
int sum = accumulate (arr.begin(),arr.end(),0);
cout << " sum of elements"<< sum << endl;

vector <int> second = { 1,2,3,4,5};

int ip=inner_product(arr.begin(),arr.end(),second.begin(),0);
cout<<" inner prod "<<  ip << endl;

vector<int>result (arr.size());
partial_sum(arr.begin(),arr.end(),result.begin());
cout << " partial sum -> ";
for (int i : result ){
    cout << i << " ";
}
cout << endl;

vector <int> third (5);
iota(third.begin(),third.end(),69);
cout << " third vector by filling values with iota with fills value with incrimentation-> ";
for (auto i :third){
    cout << i<< " ";
}
    return 0;
}