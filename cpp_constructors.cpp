#include<iostream>
#include<cmath>
using namespace std;

/****** First Example *******/
// class A{
//     int a,b;
//     public:
//     A(int , int);
//     void display(){
//         cout<<a<< " + "<<b<<"i"<<endl;
//     }
// };
// A :: A(int x, int y){
//     a = x;
//     b = y;
// }
// int main(){

//     // implicit call
//     A o1(3,5);
//     o1.display();

//     //explicit call
//     A o2 = A(4,10);
//     o2.display();
//     return 0;
// }

/******** Second Example********/

// class point{
//     int x,y;
//     public:
//         friend void distance(point, point);
//         point(int a, int b){
//             x = a;
//             y = b;
//         }
//         void display(){
//             cout<<"the point is ("<<x<<","<<y<<")"<<endl;
//         }
// };
// void distance(point p1, point p2){
//     int num = (((p2.x - p1.x)*(p2.x - p1.x)) + ((p2.y-p1.y)*(p2.y-p1.y)));
//     double res = sqrt(num);
//     cout<<"the distance between two points: "<<res;
// }
// int main(){
//     point p1(3,5);
//     p1.display();
//     point p2(5,10);
//     p2.display();
//     distance(p1,p2);
//     return 0;
// }