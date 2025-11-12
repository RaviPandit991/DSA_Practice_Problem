#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("file1.txt");
    out<<"Hello world";
    out.close();
}
