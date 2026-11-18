#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int lo = 1;
    int hi = n-2;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) {
            cout<<mid; 
            break;
        }
        else if(arr[mid]>arr[mid+1]) hi=mid-1;
        else lo=mid+1;
    }
}