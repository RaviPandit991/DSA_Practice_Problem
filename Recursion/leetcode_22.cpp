#include<bits/stdc++.h>
using namespace std;
void generate(string str,int n, int o, int c){
    if(o==n && c==n){
        cout<<str<<" ";
        return;
    }
    if(o<n){
        generate(str + '(',n,o+1,c);
    }
    if(c<o){
        generate(str + ')',n,o,c+1);
    }
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int o=0,c=0;
    generate("",n,o,c);
}