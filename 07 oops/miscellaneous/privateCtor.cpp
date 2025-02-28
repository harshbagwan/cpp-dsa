// note : ek aur use case h SINGLETON CLASS ME , DESIGN PATTERN SIDE ME , USME BHI CTOR KO PRIVATE BANA DETE H

#include <iostream>
using namespace std;
class Box{
    int width ;
    Box(int _width):width(_width){}
    public:
    int getWidth()const 
    {
     return width;
    }
    void setWidht(int val){
        width = val;
    }
    friend class BoxFactory ;
};
class BoxFactory{
    int count;
    public:
    Box returnAbox(int _w){
        ++ count ;
        return Box(_w);// _w -> _width -> width
    }
};
int main (){
    //Box a(5);
   // cout << a.getWidth()<< endl;

BoxFactory objH;
Box H = objH.returnAbox(5);// ***yaha returnAbox(int _w) ek object return kar raha h jo "Box H" me ja raha h,kyoki Box H directly constructor ko access nahi kar sakta.
cout << H.getWidth()<< endl;

    return 0;
}