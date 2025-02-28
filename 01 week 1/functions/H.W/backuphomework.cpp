#include <iostream>
#include <cmath >
using namespace std;

int count ( int c){
    for (int i=1;i<=c;i++){
        cout << i<< " ";
    }
    return 0;
}

float simple_intrest(int p,float r, int t ){
    //principal amount,rate in %, time in year
float si = (p*r*t)/100;
return si;
}

char eligiblity ( int age){
    if ( age >= 18 ){
        cout << "you're eligible for voting "<< endl ;
    }
    else {
        cout <<"you're not eligible "<< endl;
    }
}


float sip(int p,int n,float i){
    float fv;
fv = (p*pow((1+i),(n-1))*(1+i))/i ;
//cout<< fv<< endl;
return fv;

}


/* MAIN FUNCTION ********************
*************************************
************************************/  
int main(){
    // FIRST
int upper ;
cout << "give no till count "<< endl;
cin >> upper;
    int counting = count (upper);
    cout << counting << endl;

//SECOND
int pr;float rate;int time;
cout << " give p,r,t"<<endl;
cin >> pr>> rate>> time;
    float intrest_value =simple_intrest(pr,rate,time);
    cout << intrest_value << endl;

//THIRD
int umar ;
cout << "tell your umar"<< endl;
cin>> umar;
eligiblity(umar);
cout<< endl;

//FOURTH

int pesa , mahina, samay;
cout << "give value of p,m,ir"<< endl;
cin>> pesa>> mahina>> samay;
float approx_amount=sip(pesa,mahina,samay);
cout << approx_amount<< endl;
}