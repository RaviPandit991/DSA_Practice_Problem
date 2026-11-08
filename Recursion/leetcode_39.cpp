#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v, int arr[], int n, int target,int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    if(target<0) return;

    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        solver(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector<int> v;
    int idx = 0;
    solver(v,arr,n,target,idx);
}