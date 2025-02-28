//3) LOGICAL OPERATOR 

#include <iostream>
using namespace std;
int main(){

       // 3.1)LOGICAL AND OPERATOR
    
    bool con1=true;
    bool con2=1;
    bool con3=false;
    bool con4=0;
    
    if(con1 && con2 && con3&&con4){
        cout<<"all conditions are true"<<endl;
    }
    else{
        cout<<"all conditions are not true"<<endl;
    }

        
   // 3.2)LOGICAL OR OPERATOR 

bool con5=true;
    bool con6=1;
    bool con7=false;
    bool con8=0;
    bool con9=(4<5);//true
    bool con10=(2!=2);//false
    
    if(con6 ||con7 ||con8||con9){
        cout<<"atleast one condition is true"<<endl;
    }
    else{
        cout<<"all conditions are not true"<<endl;
    }


//3.3)NOT OPERATOR 
bool condition = (5!=10);
cout<< !condition <<endl;//NOT of condition print hoga
return 0;
}
