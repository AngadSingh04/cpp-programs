#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream aout;
    aout.open("cpp_SampleText2.txt");
    aout << "hello jii \n";
    aout << "hello jii \n";
    aout << "hello jii \n";
    aout.close();

    ifstream ain;
    ain.open("cpp_SampleText2.txt");
    string st;
    while(getline(ain, st)){
        cout << st << endl;   
    }
    ain.close();

    return 0;
}