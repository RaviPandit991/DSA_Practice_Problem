#include<iostream>
#include<vector>
using namespace std;
void sortfirstmethod(vector<int>& arr){
    int n=arr.size();
    int no0=0;
    int no1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            no0++;
        } else{
            no1++;
        }
    }
    for(int i=0;i<n;i++){
        if(i<no0){
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }
}
void sortsecondmethod(vector<int>& arr){
    int n=arr.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
    }
}
void display(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortfirstmethod(arr);
    sortsecondmethod(arr);
    display(arr);
}