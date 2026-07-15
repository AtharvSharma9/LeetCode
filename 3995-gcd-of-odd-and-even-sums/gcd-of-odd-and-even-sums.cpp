class Solution {
public:
    int gcd(int a, int b){
        if(b == 0) return a;
        return gcd(b, a % b);
    }
    int gcdOfOddEvenSums(int n) {
        int even = n * n, odd = n * (n + 1);
        return gcd(even, odd);
    }
};