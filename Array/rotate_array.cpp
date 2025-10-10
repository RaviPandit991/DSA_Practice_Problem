#include <iostream>
using namespace std;
void reverse(int s,int e, int arr[]){
    for(int i=s,j=e;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    if(x>n){
        x=x%n;
    }
    reverse(0,n-x-1,arr);
    reverse(n-x,n-1,arr);
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
