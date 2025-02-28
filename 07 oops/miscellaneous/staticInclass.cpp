#include <iostream>
using namespace std;

class abc{
    public:
    //static int x,y;
    int x , y;
   
   abc(): x(0),y(0) {}

    static void print()
    { 
        // this 
       // cout << this->x << " " <<this->y<<endl;
       //cout << x << " "<< y<< endl; // variable should be static to be in static function 
       // here x and y are dedicated to thier object with hidden this pointer 
    printf("I am in static %s function\n",__FUNCTION__); //MACRO __FUNCTION__
    //NO THIS POINTER ACCESSIBLE IN STATIC FUNCTION
   // }
    }
};

//STATIC MEMBER H TO BAHAR INITIALISE KARNA PADHTA H
//int abc::x ;
//int abc::y ;


int main (){
   // abc obj1 = {1,2};
   // abc obj2 = {3,4};
   abc obj1 ;
   // abc::x =2;//    obj1.x=2;
   // abc::y =3;//    obj1.y=3;
   abc::print();//obj1.print();
   abc obj2;
   //abc::x=5;//obj2.x=5;
   //abc::y =10;//obj2.y=10;
   abc::print();//obj1.print();
   abc::print();// obj2.print();
    return 0;
}