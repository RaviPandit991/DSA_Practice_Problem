#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int display(int arr[], int n, int idx){
    if(idx==n) return INT_MIN;
    return max(arr[idx],display(arr,n,idx+1));
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<4display(arr,n,0);
}