#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    system("cls");
    vector <int> arr;
   arr.push_back(10 );
   arr.push_back(20 );
   arr.push_back(30 );
   arr.push_back(40 );
   arr.push_back(50 );
int target =40;
bool it = binary_search(arr.begin(),arr.end(),target);
cout << it << endl;
//....PRINTING VALUE OF TARGET ....
//auto it2 = find (arr.begin(),arr.end(),target);
// if (it2 != arr.end()){
// cout << *it2<< endl;
// }
// else {
// cout << " element not found"<< endl;
// }
auto it3 = lower_bound(arr.begin(),arr.end(),30);// equal or grater than value inserted if value not present
cout<< *it3<< endl;
auto it4 = lower_bound(arr.begin(),arr.end(),35);
cout << *it4<< endl;
auto it5= upper_bound( arr.begin(),arr.end(),40);//ek bada dega iterator me 
cout << *it5<<endl;

int a=5,b=10;
cout << max(a,b)<<" "<< min(a,b)<< endl;
auto it6 = max_element(arr.begin(),arr.end());
auto it7 = min_element(arr.begin(),arr.end());
cout << *it6<< " "<< *it7 <<endl;
    return 0;
}