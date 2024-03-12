#include<iostream>
using namespace std;

/********** Single Inheritance **********/

class base{
    int n1;
    public:
        int n2;
        void setData();
        int getData1();
        int getData2();
};
void base :: setData(void){
    n1 = 15;
    n2 = 5;
}
int base ::getData1(void){
    return n1;
}
int base ::getData2(void){
    return n2;
}

class Derieved: public base{
    int n3;
    public:
        void calculation();
        void display_all();
};
void Derieved::calculation(){
    n3 = (getData1()+n2)*n2;
}
void Derieved::display_all(){
    cout<<"the value of n1 is "<<getData1()<<endl;
    cout<<"the value of n2 is "<<n2<<endl;
    cout<<"the value of n3 is "<<n3<<endl;
}
int main(){
    Derieved dd;
    dd.setData();
    dd.calculation();
    dd.display_all();

    return 0;
}