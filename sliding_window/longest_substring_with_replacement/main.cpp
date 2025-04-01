class Solution {
public:
    int characterReplacement(string s, int k) {
        std::set<char> distinct_chars (s.begin(), s.end());
        int longest = 0;

        for (char c : distinct_chars) {
            int count = 0;
            int l = 0;
            int r = 0;

            while(r != s.size()) {
                if (s[r] == c) {
                    count++;
                }

                while ((r - l + 1) - count > k) {
                    if (s[l] == c) {
                        count--;
                    }
                    l += 1;
                }

                longest = std::max(longest, r-l+1);
                r += 1;
            }
        }

        return longest;
    }
};
