#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool checkmark[n]={false};
    for(int i=0;i<n-1;i++){
        int count =1;
        if(checkmark[i]==true){
            continue;
        }
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                checkmark[j]=true;
            }
        }
        cout<<arr[i]<<" : "<<count<<endl;
    }

}