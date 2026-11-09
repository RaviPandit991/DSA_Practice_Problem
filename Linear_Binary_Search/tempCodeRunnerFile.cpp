#include<bits/stdc++.h>
using namespace std;
int Lower_bound(int arr[], int n, int target){
    int lo=0;
    int hi=n-1;
    while (lo<=hi)
    {