#include<iostream>
using namespace std;
int StairsPath(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return StairsPath(n-1) + StairsPath(n-2);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<StairsPath(n);
}