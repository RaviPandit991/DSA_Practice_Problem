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
    int arr2[n][m]={false};
    for(int i=0;i<(n*m);i++){
        int m;
        int count =0;
        for(int j=0;j<n;i++){
            for(int k=0;k<m;k++){
                if(arr2[i][j]==false){
                    m=arr[i][j];
                }
                if(arr[i][j]==m){
                    count++;
                    arr2[i][j]==true;
                }
            }
        }
        cout<<m<<count;
    }
}