#include<iostream>
using namespace std;

/******* reference pointer *********/
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
/****** reference variable ********/
// void swapReferenceVar(int &a , int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

int main(){
    int x = 10;
    int y = 20;
    //swap(&x,&y);
    swapReferenceVar(x,y);

    cout<<x<<endl<<y<<endl;
    return 0;
}