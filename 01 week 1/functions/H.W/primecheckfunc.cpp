// #include <iostream>
// using namespace std;

// // declare a function
// // with int argument and int return type
// bool check_prime(int n);

// int main() {

//     int num;
//     cout << "Enter a positive integer to check: ";
//     cin >> num;
    
//     int is_prime = check_prime(num);

//     if (is_prime == true)
//         cout << num << " is a prime number.";
//     else
//         cout << num << " is not a prime number.";

//     return 0;
// }

// // function to check if the number is prime
// bool check_prime(int n) {
    
//     // 0 and 1 are not prime numbers
//     if (n == 0 || n == 1) {
//         return false;
//     }

//     for (int i = 2; i <= n/2; ++i) {
//         if (n % i == 0){
//             return false;
//             }
//     }

//     return true;
//}

// AGAIN using 0 & 1 in function of bool written type 
#include <iostream>
#include <cmath>
using namespace std;
bool check_prime(int n);
int main(){
    int num;
    cout << "enter num"<<endl;
    cin>>num;
    int is_prime =check_prime(num);
    if (is_prime==1){
        cout<<"prime"<<endl;
        }
        else {
            cout<<"not prime"<<endl;        }

    }
bool check_prime(int n){
    if (n==0||n==1){
        return 0;
    }

    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
