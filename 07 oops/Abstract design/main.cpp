#include <iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *&bird){
    bird -> eat();
    bird -> fly();
    bird -> eat();
}
int main (){

   // Bird *bird = new sparrow();
   Bird *bird =new eagle();// with eagle
    birddoesSomething(bird);

    // Bird *b2 = new Bird(); // it is interface object cant be formed
    // object cant not be formed as class cant be intantiated // vendor bataye aap nahi bana sakte object
    return 0;
}