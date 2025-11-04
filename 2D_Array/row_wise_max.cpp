#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;

     for(int i=0;i<n;i++){
        int maxi=INT_MIN;
        for(int j=0;j<m;j++){
            if(maxi<arr[i][j]){
                maxi=arr[i][j];
            }
        }
        cout<<"max of "<<i<<" rows : "<<maxi<<endl;
    }
}