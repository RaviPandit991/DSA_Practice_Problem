class Solution {
public:
int first_occurrence(vector<int> &arr, int n, int target){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid == 0 || arr[mid-1] != target){
                return mid;
            }
            hi=mid-1;
        }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;
    }
    return -1;
}

int last_occurrence(vector<int> &arr, int n, int target){
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==target){
            if(mid == n-1 || arr[mid+1] != target){
                return mid;
            }
            lo=mid+1;
        }
        if(arr[mid]<target) lo=mid+1;
        if(arr[mid]>target) hi=mid-1;
    }
    return -1;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();
        vector<int> ans;
        ans.push_back(first_occurrence(nums,n,target));
        ans.push_back(last_occurrence(nums,n,target));
        return ans;
    }
};