#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void Subset(int arr[], int n, int idx, vector<int> v){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    Subset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    Subset(arr,n,idx+1,v);
}

int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    Subset(arr,n,0,v);
	return 0;
}
