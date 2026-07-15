class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int totalLen = n + m;
        int midIdx = totalLen / 2;

        int i = 0, j = 0;
        int curr = 0, prev = 0;

        // Traverse until we hit the middle element
        for (int k = 0; k <= midIdx; k++) {
            prev = curr;
            
            // Move pointer in nums1 if it's smaller, or if nums2 is exhausted
            if (i < n && (j >= m || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
        }

        // If total length is even, average the two middle numbers
        if (totalLen % 2 == 0) {
            return (static_cast<double>(prev) + curr) / 2.0;
        }
        
        // If total length is odd, return the exact middle number
        return static_cast<double>(curr);
    }
};
