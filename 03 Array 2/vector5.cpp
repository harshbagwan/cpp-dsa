#include<iostream>
#include <vector>
using namespace std;
void print ( vector <int> harsh){
    for ( auto it:harsh){
        cout<< it<< " ";
    }
}
int main( ){
    vector <int>harsh{1,2,3,4};
print (harsh);
}