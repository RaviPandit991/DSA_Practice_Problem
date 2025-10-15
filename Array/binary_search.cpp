#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool check=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==target){
            cout<<"Found : "<<m;
            check=true;
            break;
        }
        else if(arr[m]>target){
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    if(check==false){
        cout<<"Not found";
    }
}