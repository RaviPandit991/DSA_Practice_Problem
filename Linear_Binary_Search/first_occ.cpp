#include <iostream>
using namespace std;

int first_occurrence(int arr[], int n, int target){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid == 0 || arr[mid-1] != target){
                return mid;
            }
            hi=mid-1;
        }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;
    }
    return -1;
}

int last_occurrence(int arr[], int n, int target){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid == n-1 || arr[mid+1] != target){
                return mid;
            }
            lo=mid+1;
        }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;
    }
    return -1;
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    cout<<"First occurrence: "<<first_occurrence(arr,n,target)<<'\n';
    cout<<"Last occurrence: "<<last_occurrence(arr,n,target);
}
