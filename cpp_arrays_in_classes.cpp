#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int price[100];
    int counter=0;
    public:
    // int counter=0;
    void counter_no();
    void setItem();
    void display();
};

void shop :: counter_no(){
    counter = 0;
}
void shop :: setItem(){
    cout<<"Id for your item no.: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Price for item is: "<<endl;
    cin>>price[counter];
    counter++;
}
void shop :: display(){
    for(int i = 0;i<counter;i++){
        cout<<"Item ID: "<<itemId[i]<<" Price: "<<price[i]<<endl;
    }
}

int main(){
    shop s1;
    s1.counter_no();
    s1.setItem();
    s1.setItem();
    s1.setItem();
    s1.display();
}