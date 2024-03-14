#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void setData(int r, int i){
            real = r;
            imaginary = i;
        }
        void getData(){
            cout<<"real part is "<<real<<endl;
            cout<<"imaginary part is "<<imaginary<<endl;
        }
};

int main(){
    /*using ptr creating objects*/
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(1,2);
    // (*ptr).getData();

    /*using new keyword*/
    // Complex *ptr = new Complex;
    // (*ptr).setData(12,22);
    // (*ptr).getData();

    /*creating array using new*/
    // Complex *ptr1 = new Complex[3];
    // ptr1[0].setData(10,20);
    // ptr1[0].getData();

    /*creating array using arrow operator*/
    // Complex *ptr1 = new Complex[3];
    // ptr1->setData(34,54);
    // ptr1->getData();
    // (ptr1+1)->setData(22,33);
    // (ptr1+1)->getData();
    return 0;
}