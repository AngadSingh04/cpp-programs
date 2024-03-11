#include<iostream>
using namespace std;

class Des{
    static int l;
    public:
        Des(){
            l++;
            cout<<"constructor for object number "<<l<<" is created"<<endl;
            
        }
        ~Des(){
            cout<<"destructor for object number "<<l<<" is done"<<endl;
            l--;
        }
};
int Des :: l =0; 
int main(){
    cout<<"main part"<<endl;
    cout<<"first object"<<endl;
    Des n1;
    {
        cout<<"in block part"<<endl;
        Des n2,n3;
    }
    cout<<"back to main";


    return 0;
}