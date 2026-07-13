class Solution {
public:
    int countDigit(int num) {
        int ans = 0;
        while (num) {
            num = num / 10;
            ans++;
        }
        return ans;
    }

    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        vector<int> ans;

        int startLen = countDigit(low);
        int endLen = countDigit(high);

        for (int len = startLen; len <= endLen; len++) {
            for (int i = 0; i + len <= 9; i++) {
                int num = stoi(s.substr(i, len));
                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};