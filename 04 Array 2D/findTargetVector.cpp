#include <iostream>
#include <vector>
using namespace std;
bool findTarget(vector<vector<int>> &arr,int target){
    int rowSize = arr.size();
int columnSize = arr[0].size();
for (int r =0;r<rowSize;r++){
    for (int c =0;c<columnSize;c++){
        if (arr[r][c]==target){
            return true;
        }
    }
}
    return false;
}

int main (){
    //declaration
vector <vector<int>>arr(4,vector<int>(3,0));
int rowSize = arr.size();
int columnSize = arr[0].size();
//insertion
for (int r =0;r<rowSize;r++){
    for (int c =0;c<columnSize;c++){
        cout << "give value for ("<< r<<","<<c<<"):";
        cin >> arr[r][c];
    }
}

int target = 69;
bool ans = findTarget(arr,target);
cout<< ans;
    return 0;
}