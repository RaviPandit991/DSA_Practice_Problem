#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=10;
    if(k>7){
        k=k%7;
    }
    //int arr2[7];
    int i=0;
    while(i<k){
        int lst=arr[6];
        for(int i=5;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=lst;
        i++;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}