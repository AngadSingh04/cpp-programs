    #include<iostream>
    using namespace std;

/******* Example 1 *********/

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

/********* Example 2 ********/

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

/******** Example 3 ************/

// class Y;
// class X{
//     int a;
//     public:
//         void setValue(int x){
//             a = x;
//         }
//         friend void add_sum(X , Y);
// };
// class Y{
//     int b;
//     public:
//         void setValue(int y){
//             b = y;
//         }
//         friend void add_sum(X, Y);
// };


// void add_sum(X o1, Y o2){
//     cout<<"the sum is: "<<(o1.a + o2.b)<<endl;
// }
// int main(){
//     X a1;
//     a1.setValue(5);
//     Y a2;
//     a2.setValue(10);
//     add_sum(a1,a2);
//     return 0;
// }

/********* Example 4 ***********/

class B;
class A{
    int a1;
    public:
        void setValue(int x){
            a1 = x;
        }
        void display(){
            cout<<"the value of a1 is:  "<<a1<<endl;
        }
        friend void swap_value(A & ,B &);
};
class B{
    int a2;
    public:
        void setValue(int x){
            a2 = x;
        }
        void display(){
            cout<<"the value of a2 is:  "<<a2<<endl;
        }
        friend void swap_value(A & ,B &);
};

void swap_value(A &x1, B &x2){
    int temp = x1.a1;
    x1.a1 = x2.a2;
    x2.a2 = temp;
}

int main(){
    A x1;
    x1.setValue(5);
    x1.display();
    B x2;
    x2.setValue(10);
    x2.display();
    swap_value(x1,x2);
    x1.display();
    x2.display();


    return 0;
}
