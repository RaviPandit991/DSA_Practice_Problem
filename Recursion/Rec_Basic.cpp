#include<iostream>
using namespace std;
void fun(int x){
    if(x==0) return;
    cout<<"Hello word"<<endl;
    fun(x-1);
}

int main(){
    fun(3);
}