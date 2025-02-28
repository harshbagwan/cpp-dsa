
#include <iostream>
using namespace std;
int main()
{
int arr[4];
for (int i=0;i<4;i++){
    int index ;
    cout << " enter the index for which you want to give value"<<endl;
    cin >> index;
    cout << "now give value for "<<index << endl;
    cin >> arr[index];
}
for (int i =0;i<4;i++){
    cout << arr[i]<<" ";
}

    return 0;
}