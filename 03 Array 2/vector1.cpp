#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int>harsh){
    int size =harsh.size();
    for (int i=0;i<size;i++){
        cout << harsh[i]<< endl;
    }
}
int main (){
    vector <int> harsh ;
    // harsh.push_back(1);
    // harsh.push_back(2);
    // harsh.push_back(3);
  
  // giving values by while loop 
   while (1){
    int data_toPush;
    cout << "give data value"<< endl;
    cin >> data_toPush;
    harsh.push_back(data_toPush);// pushing data in vector
    cout <<"capacity:"<< harsh.capacity()<< "size:" <<harsh.size()<< endl;
   }
   // print_array (harsh);
}