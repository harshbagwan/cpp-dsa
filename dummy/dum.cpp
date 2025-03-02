#include <iostream>
#include <thread>
#include <chrono>
#include <unistd.h>
using namespace std;

void func1(int n){
    for(int i =0;i<n;i++){
        sleep(1)
        cout<<n<<endl;
        fflush(stdout);
    }
}

void func2(int n){
    for(int i=1;i<n;i++){
        sleep(1);
        cout<<i<<endl;
        fflush(stdout);
    }
}

int main(){
    cout<<"hemlo world"<<endl;
    std::thread t1(func1);
    thread t2(func2);
    t1.join();
    t2.join();
    return 0;
}