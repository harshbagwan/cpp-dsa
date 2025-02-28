#include<iostream>
using namespace std;

int main(){

int height;
cout << " Enter height in feet" << endl;
cin >> height;

int weight;
cout << "Enter yout Weight"<< endl;
cin >> weight;

if (height > 5 ){

    if (weight > 70){
        cout<<"you got a good BMI" << endl;
    }
    else {
        cout << "bhai tujhse na ho payega" << endl;
    }
}
else {
    cout << "complain dila du"<<endl;
}


return 0;


}