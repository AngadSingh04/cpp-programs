    #include<iostream>
    using namespace std;

/******* First Example *********/

    // class Complex{
    //     int a,b;
    //     public:
    //         friend Complex sumOfComplex(Complex c1, Complex c2);
    //         void setComplex(int x, int y){
    //             a = x;
    //             b = y;
    //         }
    //         void printNumber(){
    //             cout<<"your number is : "<<a<<" + "<<b<<"i"<<endl;
    //         }
    // };
    // Complex sumOfComplex(Complex c1, Complex c2){
    //     Complex c3;
    //     c3.setComplex((c1.a +c2.a),(c1.b+c2.b));
    //     return c3;
    // }
    // int main(){
    //     Complex o1,o2,o3;
    //     o1.setComplex(5,10);
    //     o1.printNumber();
    //     o2.setComplex(10,5);
    //     o2.printNumber();
    //     o3 = sumOfComplex(o1,o2);
    //     o3.printNumber();

    //     return 0;
    // }

/********* Second Example ********/

// class Complex; // Forward Declaration
// class calculator{
//     public:
//         int get_sum(int a, int b){
//             return (a+b);
//         }
//         void sum_complex(Complex o1, Complex o2);

// };
// class Complex{
//     int a,b;
//     public:
//         friend void calculator ::sum_complex(Complex o1, Complex o2);
//         void setComplex(int x, int y){
//             a = x;
//             b = y;
//         }
//         void printNumber(){
//             cout<<"the number is: "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// void calculator :: sum_complex(Complex o1, Complex o2){
//             cout<<"the sum of complex is:  "<<(o1.a+o2.a)<<" + "<<(o1.b + o2.b)<<"i"<<endl;
//         }

// int main(){
//     Complex c1,c2;
//     c1.setComplex(2,6);
//     c1.printNumber();
//     c2.setComplex(4,8);
//     c2.printNumber();
//     calculator ck;
//     int r1 = ck.get_sum(4,5);
//     cout<<"sum of two "<<r1<<endl;
//     ck.sum_complex(c1,c2);
    
//     return 0;

// }

