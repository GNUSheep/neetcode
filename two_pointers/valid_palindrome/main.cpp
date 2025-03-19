
class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.length() - 1;

        while(l < r) {
            while(!iswalnum(s[l]) && l != r) {
                l++;
            }

            while(!iswalnum(s[r]) && l != r) {
                r--;
            }

            if (tolower(s[l]) != tolower(s[r])) {
                return (false);
            } 

            l++;
            r--;
        }

        return (true);
    }
};
