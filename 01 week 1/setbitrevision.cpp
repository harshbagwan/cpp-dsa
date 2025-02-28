#include <iostream>

using namespace std;
int count_setBit(int n){
        int setbitCount =0;
    for (;;){
        if(n==0){
            break;
        }
    setbitCount+= (n&1);
    n>>=1;
    }
    return setbitCount;
}
int main()
{
    int n;
    cout << "give No\n";
    cin >> n;
    cout << count_setBit(n);

    return 0;}