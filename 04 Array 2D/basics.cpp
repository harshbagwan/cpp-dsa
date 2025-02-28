#include <iostream>
using namespace std;
int main (){
//declaration /creation
    int arr[3][3]={
        {1,2,3},
        {10,20,30},
        {11,12,13}
    };
//size
    int rowSize = 3,columnSize =3;
// #####   traversal

// Row wise
cout << " --->>> ROW WISE"<< endl;
    for (int rowIndex = 0;rowIndex<rowSize;rowIndex++){
        cout << "row no = "<< rowIndex +1<<"-> ";
        for (int columnIndex = 0;columnIndex <columnSize;columnIndex++){
            cout << arr[rowIndex][columnIndex]<<" ";
        }
        cout << endl;
    }

// Column wise
cout << " \n ### COLUMN WISE "<< endl;
    for (int ColumnIndex=0;ColumnIndex<columnSize;ColumnIndex++){
        cout << " column number: "<<ColumnIndex+1<<" ->";
for (int RowIndex =0;RowIndex < rowSize ;RowIndex++)
    {
        cout << arr[RowIndex][ColumnIndex]<<" ";
    }cout << endl;
}

cout << endl<<" ####  DIAGONALLY "<< endl;
for (int r=0;r<rowSize;r++){
    for (int c=0;c<columnSize;c++){
        if (r==c){
            cout << arr[r][c]<<" ";
        }
    }cout << endl;
}
// above code has O(N^2) TC
// below code will do it in O(N) TC
for (int i=0;i<rowSize;i++){
    cout << arr[i][i]<<" ";
}
    return 0;
}