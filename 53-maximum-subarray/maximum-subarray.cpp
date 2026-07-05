class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();

        int curr = arr[0];
        int best = arr[0];

        for(int i=1; i<n; i++){
            curr = max(arr[i], curr+arr[i]);
            best = max(best, curr);
        }

        return best;
    }
};