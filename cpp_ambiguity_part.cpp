#include<iostream>
using namespace std;

class A{
    public:
        int a,b;
        void greet(){
            cout<<"hello ji"<<endl;
        }
        void value(){
            a = 10;
            b = 20;
        }
        void display(){
            cout<<"value is"<<endl;
            cout<<"a "<<a<<endl<<"b "<<b<<endl;
        }
};
class B{
    public:
        int c,d;
        void greet(){
            cout<<"Namaste ji"<<endl;
        }
        void value(){
            c = 30;
            d = 40;
        }
        void display(){
            cout<<"value is "<<endl;
            cout<<"c "<<c<<endl<<"d "<<d<<endl;
        }
};
class C: public A, public B {
    int num1;
    public:
        void greet(){
            B :: greet();
        }
        void value(){
            A :: value();
        }
        void display(){
            A :: display();
        }
};
int main(){
    C abc;
    abc.greet();
    abc.value();
    abc.display();
    return 0;
}