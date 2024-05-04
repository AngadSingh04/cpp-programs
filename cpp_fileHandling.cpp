#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string abc = "Hello My Name Is Angad Singh";
    ofstream outputFile("cpp_SampleText.txt");
    outputFile << abc;
    return 0;
}