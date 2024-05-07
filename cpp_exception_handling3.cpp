#include<iostream>
using namespace std;
class custom_exception : public exception{
    public:
        virtual const char* what() const noexcept{
            return "IT'S A CUSTOM_EXCEPTION";
        }
};
int main(){
    string s = "four";
    try{
        throw custom_exception();
    }
    
    catch(exception& e){
        cout<<"exception caught: "<<e.what()<<endl;
    }
    
    return 0;
}