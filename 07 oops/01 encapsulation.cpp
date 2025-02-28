#include <iostream>
#include <string>
using namespace std;
class student {
    //public:
    private:// complete encapsulation
    int age,id,nos;
    string name;
private:
    float *gpa;
    string gf;
    public:
 student (int id,int age,string name,int nos,float gpa,string gf){
this-> name = name;
this-> id = id;
this-> age = age;
this-> gpa = new float(gpa);
this-> gf = gf;
}
student (){
    cout << " default constructor "<< endl;
}

void setgpa(float a){
    *this-> gpa = a;
}
float getGpa(){
    return *this->gpa;
}
int getAge(){
    return this->age;
}
void study (){
    cout << this->name << " is studying"<< endl;
}
void sleep (){
    cout << this -> name << " is sleeping"<< endl;
}
void bunk(){
    cout << this-> name << " is bunking"<< endl;
}
private:
void gfChatting(){
    cout << this -> name<< " chatting with gf "<< endl;
}
public:
~student(){
    cout <<" default destructor "<< endl;
    delete this-> gpa;
}
};
int main (){
    system("cls");
    student A(43,20,"harsh",5,6.1,"nogf");
    cout << A.getGpa()<< endl;
    A.setgpa(6.2);
    cout << A.getGpa()<< endl;
    A.getAge();

    return 0;
}
