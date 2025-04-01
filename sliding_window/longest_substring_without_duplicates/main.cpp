class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::set<char> set = {};

        int l = 0;
        int r = 0;
        int longest = 1;

        if (s.length() == 0) {
            return 0;
        }

        while (l <= r) {
            if (r == s.length()) {
                break;
            }

            while (set.find(s[r]) != set.end()) {
                set.erase(s[l]);
                l++;
            }

            set.insert(s[r]);
            longest = max(longest, r-l + 1);
            r += 1;
            
        }

        return longest;
    }
};
