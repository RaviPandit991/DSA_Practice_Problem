#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void solver(vector<int> v, int arr[], int n, int target, int idx){
    if(target==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        solver(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
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
    vector<int> v;
    solver(v,arr,n,target,0);
	return 0;
}