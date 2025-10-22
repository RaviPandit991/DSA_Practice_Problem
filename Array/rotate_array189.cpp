#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    if(k>7){
        k=k%7;
    }
    int arr2[7];
    int j=0;
    for(int i=(7-k);i<7;i++){
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0;i<(7-k);i++){
        arr2[j]=arr[i];
        j++;
    }
    for(int i=0;i<7;i++){
        cout<<arr2[i]<<" ";
    }
}