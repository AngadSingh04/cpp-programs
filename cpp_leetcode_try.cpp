#include<iostream>
using namespace std;

int main(){
    int s;
    cin>>s;
    int* myarr = new int[s];
    for(int k = 0; k<s;k++){
        cin >> myarr[k];
    }
    int count = 0;
    for(int i = 0;i<s ; i++){
        for(int j = i+1 ; j<s; j++){
            if(myarr[i]==myarr[j]){
                count++;
            }
        }
    }
    cout<<count;
}

