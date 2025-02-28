 #include <iostream>
using namespace std;

int main(){

    char grade;
    cout << "enter your grade"<<endl;
    cin >> grade;
    // if(grade == 'A'){
    //     cout<< "your marks will be in the range 100 to 90"<<endl;
    // }
    // else if(grade == 'B'){
    //     cout<< "your marks will be in the range 80 to 90"<<endl;
    // }
    // else if(grade == 'C'){
    //     cout<< "your marks will be in the range 70 to 80"<<endl;
    // }
    // else {
    //     cout << "your marks will be in the range 0 to 70"<<endl;
    // }

    switch(grade){
        case 'A':
         cout<< "your marks will be in the range 100 to 90"<<endl;
         break;
             
        case 'B':
        cout<< "your marks will be in the range 80 to 90"<<endl;
        break;

        case 'C':
        cout<< "your marks will be in the range 70 to 80"<<endl;
        break;
        
        default:
        cout << "your marks will be in the range 0 to 70"<<endl;
    }


    return 0;





}