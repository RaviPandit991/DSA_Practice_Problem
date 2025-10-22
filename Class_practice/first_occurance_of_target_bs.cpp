//first target element occurance in a array using binary search
#include<iostream>
using namespace std;
int main(){
    int found;
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
    cout<<found;
}