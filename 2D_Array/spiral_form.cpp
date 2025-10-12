#include<iostream>
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
    int minr=0,minc=0;
    int maxr=n-1,maxc=m-1;
    while(minr<=maxr && minc<=maxc){
        //right
        if(minr<=maxr && minc<=maxc)
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i];
        }
        minr++;
        //down
        if(minr<=maxr && minc<=maxc)
        for(int j=minr;j<=maxr;j++){
            cout<<arr[j][maxc];
        }
        maxc--;
        //left
        if(minr<=maxr && minc<=maxc)
        for(int k=maxc;k>=minc;k--){
            cout<<arr[maxr][k];
        }
        maxr--;
        //up
        if(minr<=maxr && minc<=maxc)
        for(int l=maxr;l>=minr;l--){
            cout<<arr[l][minc];
        }
        minc++;
    }
}