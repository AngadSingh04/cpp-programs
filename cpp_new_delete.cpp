#include<iostream>
using namespace std;

int main(){
    //normal memory allocation --> memory will get allocated at the runtime
    // int a = 10;
    // int *p = &a;
    // cout<<"value of *p is "<<*p<<endl;
    // *p = 100;
    // cout<<"value of *p is "<<*p<<endl;

    //dynamic memory allocation --> memory will get allocated at the runtime
    // int* ptr = new int(50); // value at address ptr will be 20 now
    // cout<<"value at *ptr "<<*ptr<<endl;
    // delete ptr; // deallocates the memory

    // float* myarr = new float[3];
    // myarr[0] = 10;
    // myarr[1] = 20;
    // myarr[2] = 30;
    // cout<<myarr[0]<<endl;
    // cout<<myarr[1]<<endl;
    // cout<<myarr[2]<<endl;
    // delete[] myarr;
    return 0;
}