#include<iostream>
using namespace std;

int main(){

//     int budget;
//     cout << "Enter your budget:"<< endl;

//     //input 
//     cin >> budget;

//     if(budget > 2000000){
//         cout << "you can buy scorpio" << endl;
//     }
//     else {
//         cout<< "you can not buy scorpio" << endl;
//     }

//     return 0;
// }




int marks;
cout<< "enter your marks"<<endl;
cin >> marks;

if(marks > 90){
    cout << "A";
}
else if(marks > 80){
    cout <<"B";
}
else if(marks > 70) {
    cout << "C";
}
else if(marks > 60){
    cout << "D";
}
else {
    cout<< "you are failed";
}


return 0;
}