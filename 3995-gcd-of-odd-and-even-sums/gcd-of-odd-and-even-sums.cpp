class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum = n * n;
        int evesum = n * (n+1);
        return gcd(oddsum, evesum);
    }
};