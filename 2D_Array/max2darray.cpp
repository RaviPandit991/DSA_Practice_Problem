#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of row : ";
    cin>>n;
    int m;
    cout<<"Enter number of columns : ";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }
    }
    cout<<max;
}