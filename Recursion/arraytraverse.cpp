#include<iostream>
using namespace std;
void display(int arr[],int n, int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

int main(){
    int arr[]={4,3,8,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}