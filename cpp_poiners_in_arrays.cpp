#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
        void setData(int x, float y){
            id = x;
            price = y;
        }
        void getData(){
            cout<<"ID of item is : "<<id<<endl;
            cout<<"Price of item is : "<<price<<endl;
        }
};

int main(){
    ShopItem *ptr = new ShopItem[4];
    ShopItem *ptrGet = ptr;
    int p;
    float q;
    for(int i = 0;i<4;i++){
        cout<<"Enter ID and price of item : "<<(i+1)<<endl;
        cin>>p>>q;
        // ptr[i].setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for(int j = 0;j<4;j++){
        ptrGet->getData();
        ptrGet++;
    }

    return 0;
}