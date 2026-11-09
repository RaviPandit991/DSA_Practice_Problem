class Solution {
public:
    void solver (vector<string> &ans, string str, int n, int o, int c){
        if(o==n && c==n){
            ans.push_back(str);
            return;
        }
        if(o<n){
            solver(ans,str+'(',n,o+1,c);
        }
        if(c<o){
            solver(ans,str+')',n,o,c+1);
        }
    }

    vector<string> generateParenthesis(int n) {
        string str="";
        int o=0,c=0;
        vector<string>ans;
        solver(ans,str,n,o,c);
        return ans;
    }
};