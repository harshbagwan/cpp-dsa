// DYNAMIC / RUNTIME POLYMORPHISM 
#include <iostream>
using namespace std;

class shape // final
{
    public :
    virtual void draw() //final
    {
        cout <<" generic drawing "<< endl;
    }

};
class circle : public shape
{
    public:
       void draw() override {
        cout << " circle drawing "<< endl;
       }
};

class rectangle:public shape {
    public:
    void draw()override {
    cout<< " rectangle drawing"<< endl;
    }
};
class triangle:public shape {
public:
void draw ()override {
    cout << " triangle drawing"<< endl;
}
};

void shapeDrawing(shape*s){
    s->draw();// draw is polymorphic
}


int main (){

    /*
    circle C ;// yeah sare stack pe bane huve h
    rectangle R;
    triangle *T = new triangle();//heap pe bana diya
    //C.draw();
    //R.draw();
// shape*s = &C // UPCASTING
    shapeDrawing(&C);
    shapeDrawing(&R);
    shapeDrawing(T);
*/

// without virtual function
shape*s = new shape ();
s-> draw() ;
//upcasting 
shape*s3 = new circle();
s3-> draw();

circle*c = new circle();
c-> draw();
// downcasting 
shape*s2 = new shape();
circle*c2 = (circle*)s2;// typecast kiya s2 ko 
c2 -> draw(); 



    
    return 0;
}