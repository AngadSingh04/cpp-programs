#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string abc;
    cout<< "Enter your name: ";
    getline(cin , abc);

    ofstream outputFile("cpp_SampleText.txt");
    outputFile << abc + " is my name";

    outputFile.close();

    string xyz;
    ifstream inputFile("cpp_SampleText.txt");
    getline(inputFile, xyz);
    cout << "the content of the file is: " + xyz;
    inputFile.close();

    return 0;
}