#include<iostream>
#include<vector>
using namespace std;
void skiparr(int arr[],int index, int value,int arrsize){
    int arrvalue = arr[index];
    if(arrvalue==value) skiparr(arr,index+1,value,arrsize)
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter skip number: ";
    int x;
    cin>>x;
    skiparr(arr,0,x,n);
}