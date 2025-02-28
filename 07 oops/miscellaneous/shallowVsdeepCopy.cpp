#include <iostream>
using namespace std;

class abc {
    public:
    int x;
    int *y;
    abc(int _x,int _y):x(_x),y(new int(_y)) {} 

//default dumb copy constructor : it does shallow copy
        // abc (const abc &srcobj){
        // x = srcobj.x;
        // y = srcobj.y;
        // }
// DEEP COPY SMART H 
        abc (const abc &srcobj){
            x = srcobj.x;
            y = new int (*srcobj.y);
        }
    void print () const 
    {
        printf("X:%d\nPTR Y:%p\nContent of Y(*y):%d\n\n",x,y,*y);

    }

~abc(){
    delete y; 
}
}; 
int main (){
   system("cls");

    abc *a = new abc (1,2);
    abc b = *a;
    delete a;
    b.print ();


//     abc a(1,2);
//     cout << " printing a"<< endl;
//     a.print();
//    // abc b = a;
//     abc b(a);
//     cout << " printing b"<< endl;
//     b.print();
//     *b.y =20;
//     cout << " printing b "<< endl;
//     b.print();
//    // a.print ();
    return 0;
}