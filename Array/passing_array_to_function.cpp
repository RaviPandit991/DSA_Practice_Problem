#include<iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[]){
    b[0]=100;
}
int main(){
    int arr[]={1,2,3,4,5};
    //accesing the element of array in another function
    display(arr);
    change(arr);
    display(arr);
}

//array is always pass by refrence not pass by value