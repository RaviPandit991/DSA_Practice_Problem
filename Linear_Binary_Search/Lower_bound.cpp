// #include<bits/stdc++.h>
// using namespace std;

// int Lower_bound(int arr[], int n, int target) {
//     int lo = 0;
//     int hi = n - 1;

//     while(lo <= hi) {
//         int mid = (lo + hi) / 2;
//         if(arr[mid] < target) {
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
//     }
//     return lo;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     cout << Lower_bound(arr, n, target);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int Lower_bound(int arr[], int n, int target) {
    int lo = 0;
    int hi = n - 1;

    while(lo <= hi) {
        if(lo==hi) break;
        int mid = (lo + hi) / 2;
        if(arr[mid] < target) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if(arr[hi]==target){
        return hi;
    }else return hi-1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    cout << Lower_bound(arr, n, target);
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int Lower_bound(int arr[], int n, int target) {
//     int lo = 0;
//     int hi = n - 1;

//     while(lo <= hi) {
//         if(lo==hi) break;
//         int mid = (lo + hi) / 2;
//         if(arr[mid] < target) {
//             lo = mid + 1;
//         }
//         else {
//             hi = mid - 1;
//         }
//     }
//     if(arr[hi]==target){
//         return hi;
//     }else return hi-1;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int target;
//     cin >> target;
//     cout << Lower_bound(arr, n, target);
//     return 0;
// }