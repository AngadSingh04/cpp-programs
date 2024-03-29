#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout<<"contructor called"<<endl;
        }
        ~A(){
            cout<<"destructor called"<<endl;
        }
};
int main(){
    A *a = new A[5];
    // delete a; will cause segmentation fault
    delete[] a;

    return 0;
}