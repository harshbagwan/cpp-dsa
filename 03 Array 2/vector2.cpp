#include <iostream>
#include <vector>
using namespace std;

void print_array(vector<int>harsh){
    int size =harsh.size();
    for (int i=0;i<size;i++){
        cout << harsh[i]<< " ";
    }
    cout<< endl;
}

int main (){
    vector <int> harsh ;
    harsh.push_back(1);
    harsh.push_back(2);
    harsh.push_back(3);

print_array(harsh);
    harsh.pop_back();
    print_array(harsh);
    harsh.pop_back();
    print_array(harsh);
    harsh.pop_back();
  

    print_array (harsh);
}