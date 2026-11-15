class Solution {
public:
    int mySqrt(int x) {
        int lo=0;
        int hi=x;
        while(lo<=hi){
            long long  mid = (lo+hi)/2;
            if((mid*mid)==x) return mid;
            if((mid*mid)>x) hi=mid-1;
            else lo=mid+1;
        }
        return hi;
    }
};