#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = -1;
    int lo=0;
    int hi=n-1;
    while (lo<=hi)
    {
        int mid = (lo+hi)/2;
        if(arr[mid]==mid) lo=mid+1;
        else{
            ans = mid;
            hi=mid-1;
        }
    }
    cout<<"The Smallest Missing Number is : "<<ans;
    
}