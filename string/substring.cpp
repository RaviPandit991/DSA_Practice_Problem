#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    cout<<str.substr(n/2);
}