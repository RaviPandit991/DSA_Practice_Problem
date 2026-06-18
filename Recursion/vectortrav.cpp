#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v,int idx){
    if(idx==v.size()) return;
    cout<<v[idx]<<" ";
    display(v,idx+1);
}

int main(){
    int n;
    cout<<"enter Size of vector: ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    display(v,0);
}