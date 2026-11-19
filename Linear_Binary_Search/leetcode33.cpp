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
    int target = 0;
    int pivot = -1;
    int lo=0;
    int hi=n-1;
        while (lo<=hi)
        {
            int mid = (lo+hi)/2;
            if(arr[mid]==target){
                pivot= mid;
                break;
            }
            else if(arr[lo]<=arr[mid]){
                if(target>=arr[lo] && target<=arr[mid]){
                    hi=mid-1;
                }else lo=mid+1;
            }
            else{
                if(target>arr[mid] && target<=arr[hi]) lo=mid+1;
                else hi=mid-1;
            }
    }
     cout<<pivot;
}

