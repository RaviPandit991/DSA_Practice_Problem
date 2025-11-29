// //Method 1 Brute force Method
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     bool flag = false;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         if(flag == true){
//             break;
//         }
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i];
//                 break;
//                 flag = true;
//             }
//         }
//     }
// }


// Method 2 improvement of 1 method;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool arr2[8] = {0};
//     for(int i=0;i<n;i++){
//         if(arr2[arr[i]]==false){
//             arr2[arr[i]] = true;
//         }else{
//             cout<<arr[i];
//             break;
//         }

//     }
// }


//Method 3 using mathematic method 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p = n-1;
    int sum = p*(p+1)/2;
    int sum2 = 0;
    for(int i=0;i<n;i++){
        sum2+=arr[i];
    }
    cout<<sum2-sum;
}