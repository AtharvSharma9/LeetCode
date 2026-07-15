class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        unordered_set<string> ban(banned.begin(), banned.end());

        string word = "";

        for (char &c : paragraph) {
            c = tolower(c);

            if (isalpha(c)) {
                word += c;
            } else {
                if (!word.empty()) {
                    if (!ban.count(word))
                        mp[word]++;
                    word = "";
                }
            }
        }

        // Last word
        if (!word.empty()) {
            if (!ban.count(word))
                mp[word]++;
        }

        string ans = "";
        int mx = 0;

        for (auto &x : mp) {
            if (x.second > mx) {
                mx = x.second;
                ans = x.first;
            }
        }

        return ans;
    }
};