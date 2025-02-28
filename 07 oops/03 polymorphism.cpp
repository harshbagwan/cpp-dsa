//COMPILE TIME /STATIC POLYMORPHISM

#include <iostream>
#include <string>
using namespace std;
//FUNCATION OVERLOADING 
/*
    class Add{
    public :
    int sum (int x,int y,int z){
      return x+y+z;
    }
    int sum (int x,int y){
        return x+y;
    }
    double sum(double x,double y){
        return x+y;
    }
};

*/

//OPERATOR OVERLOADING 
class complex{
    public:
    int real;
    int imag;
    complex(){
        real = imag = -1;
    }
complex (int r,int i):real(r),imag(i){};
// {this -> real = r;
//  this -> imag = i;
//  }


//SYNTAX 
//return_type operator <op> (args){
    // jo bhi kam ho
    //reaturn <>
//}
complex operator + (const complex &B)//const means B ko aap change na kar pao
{
   /// this-> A instance (this A ke instance ko point karega)
    complex temp;
    temp.real = this -> real + B.real;
    temp.imag = this -> imag + B.imag;
    return temp;
}
complex operator - (const complex &B)
{
    complex temp;
    temp.real = this -> real - B.real;
    temp.imag = this -> imag - B.imag;
    return temp;
}
bool operator ==(const complex &B){
    // this -> A instance
    return (this -> real == B.real)&& (this-> imag == B.imag);
}
void print (){
    printf("[%d + i%d]\n",this->real,this->imag);
}
};
int main (){
    // Add add;
    // cout << add.sum(1,2)<<endl;
    // cout << add.sum(1,2,3)<< endl;
    // cout << add.sum(1.1,1.1)<< endl;


    complex A(3,3);
    A.print();

    complex B(3,3);
    B.print();

    complex C = A + B ;
    C.print();

    complex D = A-B;
    D.print();

    bool a = A==B;
    cout << a;
    return 0;
}