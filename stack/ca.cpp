#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[5] = {4,2,6,0,1};
    // int size =0;
    // for(int c:arr){
    //     size++;
    // }
    // sort(arr,arr+size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    vector<int> arr;
    arr.push_back(4);
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(0);
    arr.push_back(1);
    int size = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}