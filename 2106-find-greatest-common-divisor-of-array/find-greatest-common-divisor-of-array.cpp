class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n =  nums.size();
        int lo = INT_MAX;
        int hi = INT_MIN;

        for(int i=0; i<n; i++){
            lo = min(lo, nums[i]);
            hi = max(hi, nums[i]);
        }

        return gcd(lo,hi);
    }
};