#include <iostream>
using namespace std;
    class A{
        private :
        int x;
        public:
        A(int _val):x(_val){}
int getX() const {return x;}
void setX(int _val) {x = _val;}

//friend class B;
//friend void print(const A&a);
void print () const
{
    cout << x << endl;
}
};

    class B{
        public:
        void print (const A&a){
            //cout << a.getX()<<endl;
          //  cout << a.x<< endl;emote 
            a.print ();
        }

};
// void print (const A &a){
//     cout << a.x<< endl;
// }

int main (){
    A obj(69);
    B objB;
    objB.print(obj);//obj -> A class ka object h , A type ka object h
    //print (obj);

    return 0;
}