// print good morning n number of times
#include<iostream>
using namespace std;
void greeting(int n){
    if(n==0) return;
    cout<<"Good Morning "<<endl;
    greeting(n-1);
}

int main(){
    int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    greeting(n);
}