#include<iostream>
using namespace std;

int binary_to_decimal(int n){
    int num = n;
    int dec_value = 0;
    int base =1;
    int temp = num;
    while(temp){
        int last_digit = temp%10;
        temp = temp/10;
        dec_value += last_digit*base;
        base = base*2;
    }
    return dec_value;
}
int main(){
    int n = 1000110;
    cout << "Binary to Decimal is : "<<binary_to_decimal(n)<<endl;
    return 0;
}