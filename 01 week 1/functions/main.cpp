#include <iostream>
using namespace std;

int getmultiplication(int x,int y,int z){

    int result = x*y*z;
    return result;
}

void printnametentimes(){
    for(int i=1;i<=10;i++){
        cout<<"harsh"<<endl;
    }
}
void printmultiples(int num){
    for(int i=1;i<=10;i++){
        cout<< num * i<<endl;
    }
    return;
}

int convert_into_celcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

char convert_into_uppercase(char ch){
    char answer =ch-'a' + 'A';
    return answer;
}
int main(){

    int multiplication_answer = getmultiplication(5,4,3);
    cout<< multiplication_answer<<endl;
    
    printnametentimes();

    int no=5;
    printmultiples(no);

    int far =32;
   int ans= convert_into_celcius(far);
   cout<< "IN CELSIUS"<<" " <<ans << endl;
   
   char resultt= convert_into_uppercase('h');
   cout<<resultt<< endl;


}
