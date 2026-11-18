#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number Of squrt : ";
    cin>>n;
    int lo=0;
    int hi=n;
    int ans=-1;
    while (lo<=hi)
    {
        int mid=(lo+hi)/2;
        if((mid*mid)==n) {
            ans=mid;
            break;
        }
        if((mid*mid)>n) hi=mid-1;
        else lo=mid+1;
    }
    if(ans==-1){
        cout<<hi;
    }else{
        cout<<ans;
    }
}