class Solution {
public:
    void solver(vector<vector<int>> &v, vector<int> m, vector<int> candidates, int n, int target,int idx){
        if(target==0){
            v.push_back(m);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=idx;i<n;i++){
            m.push_back(candidates[i]);
            solver(v,m,candidates,n,target-candidates[i],i);
            m.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        int n = candidates.size();
        vector<int> m;
        int idx=0;
        solver(v,m,candidates,n,target,idx);
        return v;
    }
};