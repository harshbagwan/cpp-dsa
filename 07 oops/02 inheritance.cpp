#include <iostream>
#include <string>
using namespace std;
class vehicle {
    //by default private h
    protected:
    string name;
    public:
    string model;
    int noOfTyres;

// GETTER SETTER METHOD FOR PRIVATE 
// string getName(){
//     return this->name;
// }

// VEHICLE CONSTRUCTOR //
    vehicle (string _name,string _model,int _noOfTyres){
        cout << " i am inside vehicle consr"<< endl; 
        this -> name = _name;
        this -> model = _model;
        this -> noOfTyres= _noOfTyres;

    }
public:
    void startEngine(){
        cout << " engine is starting "<<name<< " " << model <<  endl;
    }
    void stopEngine(){
        cout << " engine is stopping "<< name << " "<< model<< endl;
    }

    
~ vehicle(){ 
    cout << " i am inside vehicle dtor "<< endl;
}
 };

 class car: public vehicle{// derived from class vehicle 

protected:
int noOfDoors;
string transmissionType;

public:  
car (string _name,string _model,int _noOfTyres,int _noOfDoors,string _transmissionType ):vehicle(_name,_model,_noOfTyres)
// jab ap car ka object banoge to vehicle ki chizo ka use karoge
// to saari cheeze honi chaiye
{ 
    cout << " i am inside car's consrtructor "<< endl;
   this -> noOfDoors = _noOfDoors;
   this -> transmissionType = _transmissionType; 
}

void startAc(){
    cout << "Ac has started of "<< name<< endl;
}

~car(){
    cout << " i am inside car dtor "<< endl;
}
};
class motorcycle: public vehicle 
{
    protected :
     string handleBarStyle;
     string suspensionType;
 
 public:
 motorcycle (string _name,string _model,int _noOfTyres,string _handleBarStyle,string _suspensionType)/* main se aa rahe h */
 :vehicle(_name,_model ,_noOfTyres)// parent ke specific data values ko initialise karna padega
 {  
    this -> handleBarStyle = _handleBarStyle;
    this -> suspensionType = _suspensionType;
  }

void wheelie(){
    cout << " wheelie kar rahi h "<< name<< endl;
}

~ motorcycle(){ 
    cout << " i am inside motorcycle dtor "<< endl;
}
};
int main (){
 car A("toyota","LXI",4,4,"Manual");
A.startEngine();
A.startAc();
A.stopEngine();

motorcycle M("BMW","xxx",2,"U_shape","Hard");
M.startEngine();
M.wheelie();
M.stopEngine();
    return 0;
}