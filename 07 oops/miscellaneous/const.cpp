#include <iostream>
using namespace std;
class abc {
    mutable int x;// ***mutable keyword used for debugging purposes
    int *y;
   const int z ;
public :
    // abc()//default constructor
    // {
    //     x= 0;
    //     y = new int (0);
    // }

    // OLD METHOD 
    // abc (int a,int b,int c = 0,int d = 0)//***** default argument
    // {
    //     this -> x = a;
    //  // y = new int (b);
    //   // dynamic memory allocation hogi aur fir destructor banake dekete karke memory free karani padegi

    // y = new int (b);// dought why not    y* = b;
    // this -> z = c;
    // }

    //INITAILISATION LIST instead of constructor , diff syntax for assigning values
    // isme apn const values intialise karne ke bad bhi unko ressign/modify kar sakte h ,initialise kar sakte h 
    // par { } ke andar ressign nahi kar
    abc(int a,int b,int c):x(a),y(new int(b)),z(c)
    {
        cout << " in initialisation list"<< endl;
        *y = *y * 10;
    }
  
int getX()const 
{
    x=10;
    return x;
}
void setX(int val){
    x = val;
}
int getY()const
{
    return *y;
}
void setY(int val){
    *y = val;
    //y = new int (val);
}
int getZ()const
{
    return z;
}
};
void print_abc (const abc &obj)// sare const function hi call kerne padenge ,kyoki a modify nahi ho sakta
{
   cout << obj.getX()<< " "<< obj.getY()<<" "<<obj.getZ()<< endl;
}
void fun (){
    const int x =5;// initialisation can be done but we can't re-assign a value.

    // int *p = &x; // c based compiler technique
    // *p = 69;
    cout << x << endl;
}
void fun2(){
    // const with pointer 
    int *a = new int ;
    *a =5;
    cout << *a<< endl;
    delete a;// ab memory leak nahi hogi
    int b = 69;
    a = &b;
    cout << *a<< endl;

    // const data & non const pointer 
    //POINTER KA CONTENT REASSIGN NAHI KAR SAKTE , POINTER KO REASSIGN KAR SAKTE HO
         //const int*c = new int(2);
         // if i write CONST before * then CONTENT will be constant
    int const*c =new int (2);// same as line 22
    cout << *c<< endl;
    //*c = 69;
    //cout << *c<< endl;
    int d = 69;
    c = &d;
    cout << *c << endl;
}

void fun3(){
    // CONST POINTER AND NON-CONST DATA
    int *const a = new int (2);
    *a =69 ;
    cout << *a<< endl;

   // int b = 68;
   // a = &b;// nahi chalega kyoki pointer consttant h 
}
void fun4 (){
    // CONST POINTER AND CONST DATA 
    const int *const a = new int(11);
    cout << * a << endl;
   // *a = 69; // data const h
    //int b = 68;
    //a = &b;// pointer const h

}

int main (){
system("cls");
//fun3();
abc r(69,68,67);
print_abc(r);
    return 0;
}