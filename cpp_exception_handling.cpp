#include<iostream>
using namespace std;

int main(){
    int num, den, result;
    cout<<"numerator and denominator"<<endl;
    cin >> num >> den;
    try{
        if(den==0){
            throw den;
        }
        result = num/den;
    }
    catch(int ex){
        cout<<"exception: divide by zero is not allowed"<<ex<<endl;
    }
    
    cout<<"the division is: "<< result;
    return 0;
}