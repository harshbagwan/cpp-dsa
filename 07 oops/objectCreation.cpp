#include <iostream>
#include <string>
using namespace std;

class student{
    public:
    // ATTRIBUTES 
    int id,age,nos;
    string name;
    float *gpa;

//constructor: default constructor 
    student (){
        cout << " student default constr called "<< endl;
        gpa = nullptr;// initialise to avoid deleting garbage in dtor
    }
// parametrised constructor 
    student (int id, int age, string name,int nos,float gpa){
        cout << " student parametrised constructor called"<<endl;
        this-> id = id;
        this -> age = age ;// iski age ko jo parameter se jo value ayi set kardo
        this -> name = name;
        this-> nos = nos;
        this -> gpa = new float(gpa);//dynamic memory allocation
    }

// Copy consturctor 
    student (const student &srcobj){//student type ka object le rahe h , srcobj - source obj
        cout << " copy constructor called "<< endl;
        this -> id = srcobj.id;
        this->age = srcobj.age;
        this-> name = srcobj.name;
        this-> nos = srcobj.nos;
        if (srcobj.gpa){
            this -> gpa = new float (*srcobj.gpa);
        }
        else {
            this-> gpa = nullptr;
        }
       // this -> gpa = new float(*srcobj.gpa);//* ensure that we deference the value and provind it to a newly made block for gpa
    }
 // BEHAVIOUR / METHODS / FUNCTION
 void study (){
    cout <<this-> name<< " studying "<<endl;
 } 
 void sleep (){
    cout<< this-> name << " sleeping "<< endl;
 }
 void bunk (){
    cout<< this-> name << " bunking"<< endl;
 }

 // desturctor : default desturctor 
 ~ student (){
    cout << "student default destructor called "<< endl;
    delete this ->gpa;
 }

};

int main (){
    system("cls");
    // student A;
    // A.name = "harsh";
    // A.id = 43;
    // A.age = 20;
    // A.nos = 5;
    // A.study();

    // student B;
    // B.name = " krishna";
    // B.id = 55;
    // B.nos = 5;
    // B.age = 19;
    // B.bunk();

//student A(43,20,"harsh",5,6.1);//STACK 
//cout << A.age<< " "<< A.name<< endl;
student A;
A.age = 21;
A.nos =5;
A.id= 44;
A.name = "Harsh";
A.gpa = new float(6.2);

student B(55,19,"krishna",5,7.1);// using parameterised ctor

A.bunk();
B.sleep();

student C = A;  // using copy ctor
                // student C(A); 
cout << C.name<< " "<< A.name << endl;

// dynamic memory allocation or /// student pointer ////
student *D = new student(42,19,"gourav",5,8.1);
cout << D -> name << " "<< D-> age << endl;
D -> study();

delete D;// ---->>>>>  destructor le liye kyoki object pointer Hai

    return 0;
}