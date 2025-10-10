#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int *ptr = arr;
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //next method to print array
    for(int i=0;i<5;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;
    cout<<endl;
    //examine the value
    cout<<*ptr<<" ";
    cout<<++*ptr;
}