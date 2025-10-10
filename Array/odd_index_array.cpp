#include<iostream>
using namespace std;
int main(){
    cout<<"Enter size of array : ";
    int n;
    cin>>n;
    int arr[n];
    bool check = true;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i+=2){
        cout<<arr[i]<<" ";
    }
}