#include<iostream>
#include<string>
using namespace std;

class binary{
    string s; // directly writing makes it default private
    public:
    void get_prime();
    void check_prime();
    void display();
    void ones_compliment();
    void twos_compliment();
};

void binary :: get_prime(){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void binary :: check_prime(){
    for(int i = 0; i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Not a valid binary number"<<endl;
            exit(0);
        }
    }
}
void binary :: display(){
    cout<<"binary number"<<endl;
    for(int i = 0; i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<endl;
}
void binary :: ones_compliment(){
    for(int i = 0; i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }else{
            s.at(i)='0';
        }
    }
}
void binary :: twos_compliment(){
    
}

int main(){
    binary b1;
    b1.get_prime();
    b1.check_prime();
    b1.display();
    b1.ones_compliment();
    b1.display();

}