#if !defined(BIRD_H)  // BIRD_H ko bar bar bhi include karoge to bhi yeah ek hi bar include hoga
#define BIRD_H 

// vendor's side
#include <iostream>
class Bird {
    public:
    virtual void eat()=0; // this is called pure virtual function 
    virtual void fly()=0;// by doing this thing, this class will become interface
    // classes that inherit this class has to implement pure virtual function
};
    class sparrow:public Bird {
        public :
        void eat(){
           std:: cout << "sparrow is eating\n ";
        }
        void fly(){
            std::cout << "sparrow is flying \n";
        }

};

class eagle:public Bird {
    public :
    void eat(){
       std:: cout << "eagle is eating\n ";
    }
    void fly(){
        std::cout << "eagle is flying \n";
    }

};



#endif // BIRD_H
