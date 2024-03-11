#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){
            a=0;
        }
        Number(int x);
        Number(Number &num){
            a = num.a;
        }
        void display(){
            cout<<"copy constructor called"<<endl;
            cout<<"the number is: "<<a<<endl;
        }
};
Number :: Number(int x){
    a = x;
}
int main(){
    Number o1,o2,o3(10),o4;
    o1.display();
    o3.display();
    Number o11(o1); // copy constructor invoked
    o11.display();
    o4 = o1; // copy constructor not invoked
    o4.display();
    Number o5 = o1; // copy constructor invoked
    o5.display();
    return 0;
}