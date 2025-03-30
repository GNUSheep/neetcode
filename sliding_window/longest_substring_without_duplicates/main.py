class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        l = 0
        r = 1

        if len(s) == 0:
            return 0

        longest = 1
        while l != r:
            if r == len(s):
                break

            while s[r] in s[l:r]:
                l += 1

            longest = max(longest, len(s[l:r+1]))
            r += 1
        return longest
             
