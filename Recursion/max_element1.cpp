#include<iostream>
#include<bits\stdc++.h>
using namespace std;
void display(int arr[], int n, int idx, int max){
    if(idx==n){
        cout<<max;
        return;
    }
    if(max<arr[idx]) max=arr[idx];
    display(arr,n,idx+1,max);
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n,0,INT_MIN);
}