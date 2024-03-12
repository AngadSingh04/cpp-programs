#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A(int i){
            a = i;
            cout<<"Base1 class constructor called !!"<<endl;
        }
        void get1(){
            cout<<"value of a is : "<<a<<endl;
        }
};

class B{
    int b;
    public:
        B(int j){
            b = j;
            cout<<"Base2 class constructor called !!"<<endl;
        }
        void get2(){
            cout<<"value of b is : "<<b<<endl;
        }
};

class C: public B, public A {
    int c;
    public:
        C(int x, int y, int z): B(x), A(y) {
            c = z;
             cout<<"derived class constructor called"<<endl;
        }
        void get3(){
            cout<<"value of c is : "<<c<<endl;
        }      
};

int main(){
    C abc(10,20,30);
    abc.get1();
    abc.get2();
    abc.get3();
    return 0;
}