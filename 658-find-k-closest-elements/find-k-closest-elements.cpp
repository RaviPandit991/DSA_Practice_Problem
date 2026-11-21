class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n=arr.size();
        if(x<arr[0]){
            for(int i=0;i<k;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        if(x>arr[n-1]){
            for(int i=n-k;i<n;i++){
                ans.push_back(arr[i]);
            }
            return ans;
        }
        int lo=0;
        int hi=n-1;
        int mid=0;
        bool flag =false;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(arr[mid]==x){
                flag=true;
                break;
            }
            else if(arr[mid]>x) hi=mid-1;
            else lo=mid+1;
        }
        int lb=hi;
        int hb=lo;
        if(flag==true){
            lb=mid-1;
            hb=mid+1;
            ans.push_back(arr[mid]);
            k=k-1;
        }
        while(k>0){
            if(lb < 0) {
                ans.push_back(arr[hb++]);
            }
            else if(hb >= n) {
                ans.push_back(arr[lb--]);
            }
            else {
                int m1 = abs(x-arr[lb]);
                int m2 = abs(x-arr[hb]);

                if(m1 <= m2) {
                    ans.push_back(arr[lb--]);
                }
                else {
                    ans.push_back(arr[hb++]);
                }
            }
            k--;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};