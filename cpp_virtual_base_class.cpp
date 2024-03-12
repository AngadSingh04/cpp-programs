#include<iostream>
using namespace std;

class Student{
    protected:
        int registration_no;
    public:
        void set_no(int a){
            registration_no = a;
        }
        void get_no(){
            cout<<"registration number is : "<<registration_no<<endl;
        }
};

class EnglishSocials: virtual public Student {
    protected:
        float english;
        float socials;
    public:
        void setMarks1(float e, float s){
            english = e;
            socials = s;
        }
        void getMarks(){
            cout<<"English marks : "<<english<<endl
                <<"Socials marks : "<<socials<<endl;
        }
};

class MathsPhysics: virtual public Student {
    protected:
        float maths;
        float physics;
    public:
        void setMarks2(float m, float p){
            maths = m;
            physics = p;
        }
        void getMarks(){
            cout <<"Maths marks : "<<maths<<endl
                 <<"Physics marks : "<<physics<<endl;
        }
};

class Total: public EnglishSocials, public MathsPhysics {
    protected:
        float total;
    public:
        void get_total(){
            total = (english+socials+maths+physics);
            cout<<"total marks : "<<total<<endl;
        }
        void display(){
            get_no();
            EnglishSocials::getMarks();
            MathsPhysics ::getMarks();
            get_total();
        }
};

int main(){
    Total T;
    T.set_no(12);
    T.setMarks1(90.0,95.0);
    T.setMarks2(85.0,98.5);
    T.display();
    return 0;
}