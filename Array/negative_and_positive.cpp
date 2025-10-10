#include <iostream>
#include<vector>
using namespace std;
void move(vector<int> &arr){
    vector <int> negative;
    vector <int> positive;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative.push_back(arr[i]);
        }else{
            positive.push_back(arr[i]);
        }
    }
    for(int i=0;i<negative.size();i++){
        arr[i]=negative[i];
    }
    for(int i=negative.size(),j=0;i<n;i++,j++){
        arr[i]=positive[j];
    }
}
int main() {
	int x;
    cin>>x;
    vector <int> arr(x);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    move(arr);
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}