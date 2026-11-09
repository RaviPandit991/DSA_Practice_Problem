#include<bits/stdc++.h>
using namespace std;
int Binary_search(int arr[], int n, int target){
    int lo=0;
    int hi=n-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]<target) lo=mid+1;
        else hi=mid-1;
    }
    return -1;
    
}
int main(){
    int n;
    cout<<"Enter Size of Array : ";
    cin>>n;
    int target;
    cout<<"Enter target number : ";
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=Binary_search(arr,n,target);
    cout<<ans;
}