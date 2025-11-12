#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in ("file1.txt");
    string line;
    while(getline(in,line)){
        cout<<line<<endl;
    }
    in.close();
}