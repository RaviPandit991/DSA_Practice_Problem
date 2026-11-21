#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool helper(int mid, const vector<int>& arr, int days){
    int count = 1;
    int m = mid;
    for(int i=0;i<(int)arr.size();i++){
        if(m>=arr[i]){
            m-=arr[i];
        }else{
            count++;
            m=mid-arr[i];
        }
    }
    return count<=days;
}

int main() {
	int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int days;
    cin>>days;
    int sum=0;
    int maximum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(maximum<arr[i]) maximum=arr[i];
    }
    int lo = maximum;
    int hi = sum;
    int ans = 0;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(helper(mid,arr,days)==true){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans;
}
