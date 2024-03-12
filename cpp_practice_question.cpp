#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        float a,b;
    public:
        void setData(float x,float y){
            a = x;
            b = y;
        }
        void opearations(){
            cout<<"Sum "<<(a+b)<<endl;
            cout<<"Subtract "<< (a-b)<<endl;
            cout<<"Multiply "<<(a*b)<<endl;
            cout<<"Divide "<<(a/b)<<endl;
        }
        
};  
class ScientificCalculator{
    protected:
        float c,d;
    public:
        void setData2(float x1, float y1){
            c = x1;
            d = y1;
        }
        void c_opearations(){
            cout<<"Power "<<pow(c,d)<<endl;
            cout<<"Square root "<<sqrt(c)<<endl;
            cout<<"Sine"<<"("<<c<<") is "<<sin((c*M_PI)/180)<<endl;
        }
};
class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    public:
        void display_all(){
            opearations();
            c_opearations();
        }
};
int main(){
    HybridCalculator hc;
    hc.setData(5,10);
    hc.setData2(45,3);
    hc.display_all();
    return 0;
}