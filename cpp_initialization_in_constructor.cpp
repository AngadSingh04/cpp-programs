#include<iostream>
using namespace std;

class A{
    int a,b;
    public:
        // A(int x, int y): a(x), b(y) 
        // A(int x, int y): a(x), b(a+y) 
        // A(int x, int y): b(y), a(x+b) 
        {
            cout<<"constructor initialized"<<endl;
            cout<<"value of a is : "<<a<<endl;
            cout<<"value of b is : "<<b<<endl;
        }
};
int main(){
    A o1(5,5);
    return 0;
}