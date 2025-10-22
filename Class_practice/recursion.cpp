#include<iostream>
using namespace std;
void rec(int a){
    if(a<=5){
        rec(a+1);
        cout<<a;
    }
}
int main(){
    int n=1;
    rec(n);
}