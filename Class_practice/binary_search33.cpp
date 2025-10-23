#include<iostream>
using namespace std;
int main(){
    int arr[7 ]={4,5,6,7,0,1,2};
    int target=0;
    int l=0,r=6;
    int idx=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==target){
            idx=mid;
        }
        if(arr[mid]-arr[l]>arr[mid+1]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<idx;
}