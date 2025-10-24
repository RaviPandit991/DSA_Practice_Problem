#include<iostream>
using namespace std;
int  helper(int arr[],int n){
    int sum;
    if(n<=0){

    }
    helper(arr,n-1);
} 
int main(){
    int arr[5]={6,4,8,5,7};
    int h=helper(arr,5);
    cout<<h;

}