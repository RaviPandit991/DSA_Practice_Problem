class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();

        int lo = 0, hi = n;

        // Find insertion position of x
        while(lo < hi) {
            int mid = lo + (hi-lo)/2;

            if(arr[mid] < x)
                lo = mid+1;
            else
                hi = mid;
        }

        int left = lo-1;
        int right = lo;

        vector<int> ans;

        while(k--) {
            if(left < 0) {
                ans.push_back(arr[right++]);
            }
            else if(right >= n) {
                ans.push_back(arr[left--]);
            }
            else if(abs(x-arr[left]) <= abs(x-arr[right])) {
                ans.push_back(arr[left--]);
            }
            else {
                ans.push_back(arr[right++]);
            }
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};