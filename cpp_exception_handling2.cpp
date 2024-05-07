#include<iostream>
using namespace std;

int main(){
    string s = "four";
    try{
        cout << s.at(4);
    }
    catch(out_of_range& e){
        cout<<"Exception: "<<e.what()<<endl;  //Exception: basic_string::at: __n (which is 4) >= this->size() (which is 4)
    }
    
    return 0;
}