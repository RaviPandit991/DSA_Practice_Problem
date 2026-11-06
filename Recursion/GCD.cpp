#include<iostream>
using namespace std;
int GCD(int n, int m){
    if(n==0) return m;
    else GCD(m%n,n);
}
int main(){
    int n, m;
    cout<<"Enter value of A : ";
    cin>>n;
    cout<<"Enter value of B : ";
    cin>>m;
    cout<<GCD(n,m);
}