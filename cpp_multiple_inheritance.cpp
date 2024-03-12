#include<iostream>
using namespace std;


class A{
    protected:
        int n1;
    public:
        void setData1(int);
};
void A ::setData1(int x){
    n1 = x;
}
class B{
    protected:
        int n2;
    public:
        void setData2(int);
};
void B ::setData2(int y){
    n2 = y;
}
class C : public A, public B {
    public:
        void display(){
            cout<<"value of data 1 is: "<<n1<<endl;
            cout<<"value of data 2 is: "<<n2<<endl;
            cout<<"product of data 1 and data 2 is: "<<(n1*n2)<<endl;
        }
};
int main(){
    C abc;
    abc.setData1(10);
    abc.setData2(100);
    abc.display();
    return 0;
}