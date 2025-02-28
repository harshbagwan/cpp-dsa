//MAP -COLLECTION OF KEY VALUE PAIRS
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
int main (){
    unordered_map<string,string> table;
    //INSERTION
    //1)
    table["in"]= " India";
    //2)
    table.insert(make_pair("en","England"));
    //table[""]
    //3)
    pair<string,string>p;
    p.first="br";
    p.second="Brazil";
    table.insert(p);
    cout << table.size()<<endl;
    //table.clear();
    //cout << table.size()<<endl;
cout << table["in"]<<endl;
table.at("in")="India2";
cout << table["in"]<<endl;

unordered_map <string,string> :: iterator it= table.begin();
while (it != table.end()){
    pair<string,string>p=*it;
    cout<< p.first<< " ->"<< p.second<< endl;
    it ++;
}
cout << endl;

table.erase (table.begin(),table.end());
cout << table.size()<< endl;
//FIND 
if (table.find("in")!=table.end()){
    cout << " key found"<< endl;
}
else{
    cout << " key not found"<< endl;
}
//COUNT
if (table.count("in")==1){
    cout<<"key exist"<<endl;
}
if (table.count("in")==0){
    cout << " key doesn't exist"<<endl;
}
    return 0;
}