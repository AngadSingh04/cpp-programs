#include<iostream>
using namespace std;

/****** First Example *******/

class A{
    public:
        int a;
        void setData1(){
            a  = 20;
        }
        void getData1(){
            cout<<"value of a is: "<<a<<endl;
        }

};
class B: public A{
    public:
        int b;
        void setData2(){
            b = 50;
        }
        void getData2(){
            cout<<"value if b is: "<<b<<endl;
        }
};
class C: public B{
    public:
        int c;
        void setData3(){
            c = 100;
        }
        void getData3(){
            cout<<"value of c is: "<<c<<endl;
        }
        void display_all(){
            getData1();
            getData2();
            getData3();
        }
};
int main(){

    C abc;
    abc.setData1();
    abc.setData2();
    abc.setData3();
    abc.display_all();
    return 0;
}