#include <iostream>
using namespace std;
#define PI 3.1415
#define Maxx(x,y) (x>y?x:y)
float circleArea(float r){
   return  PI*r*r;
}
float perimeter (float r){
    return 2*PI*r;
}
void fun1(){
    int a =5;
    int b = 6;
    int c = Maxx(a,b);
}
void fun2(){
    int a = 4;
    int d = 3;
    int f = Maxx(a,d);
} 
int main (){
    cout << " circle area = "<< circleArea(5)<< endl;
    return 0;
}