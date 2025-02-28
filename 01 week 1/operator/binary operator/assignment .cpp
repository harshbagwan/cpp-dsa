//  4) ASSIGNMENT OPERATOR 
    
    #include <iostream>
    using namespace std;
    int main (){
        
        int arr = 5;
        cout << arr;
        cout <<endl;
        cout << (arr = arr+10) <<endl;
        cout <<(arr+=10)<<endl;// used assignment operator

        cout <<(arr -=10) <<endl;
        cout<< (arr*=2)<<endl;
        cout <<(arr/=2)<<endl;
        cout<< (arr%=3);//remainder =0

        return 0;
    }