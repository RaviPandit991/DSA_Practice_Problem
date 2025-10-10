#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cout<<"Enter a element to find in array : ";
    cin>>m;
    bool checkmark = false;
    for(int i=0;i<n;i++){
        if(arr[i]==m){
            checkmark = true;
            break;
        }
    }
    if(checkmark==true){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }

}