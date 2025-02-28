#include <iostream>
using namespace std;
int main(){
    int day;
    cout << "enter day"<<endl;
    cin>> day;

    switch(day){
        case 1:
        cout << "monday"<<endl;
        break;
        case 2:
        cout <<"tuesday"<<endl;
        break;
        default: 
        cout<< "weekend"<<endl;
    }
    return 0;
}
