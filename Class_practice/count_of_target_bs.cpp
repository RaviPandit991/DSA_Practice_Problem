#include<iostream>
using namespace std;
int main(){
    int found;
    int last;
    int target =2;
    int arr[9]={1,1,2,2,3,3,4,5,6};
    int i=0,j=8;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==target){
            found=mid;
            j=mid-1;
        }else if(arr[mid]>target){
            j=mid-1;
        }else{
            i=mid+1;
        }
    }
    int l=0,r=8;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==target){
            last=mid;
            l=mid+1;
        }else if(arr[mid]>target){
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<(last-found)+1;
}